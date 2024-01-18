/* SPDX-License-Identifier: GPL-2.0-only */

#include <amdblocks/acpimmio.h>
#include <amdblocks/fsp.h>
#include <amdblocks/memmap.h>
#include <amdblocks/pmlib.h>
#include <amdblocks/post_codes.h>
#include <amdblocks/stb.h>
#include <console/console.h>
#include <cpu/cpu.h>
#include <program_loading.h>
#include <romstage_common.h>

void __noreturn romstage_main(void)
{
	post_code(POSTCODE_ROMSTAGE_MAIN);

	if (CONFIG(WRITE_STB_BUFFER_TO_CONSOLE))
		write_stb_to_console();

	/* Snapshot chipset state prior to any FSP call */
	fill_chipset_state();

	amd_fsp_early_init();

	/* Fixup settings FSP-M should not be changing */
	fch_disable_legacy_dma_io();

	memmap_stash_early_dram_usage();

	run_ramstage();
}
