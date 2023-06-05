/* SPDX-License-Identifier: GPL-2.0-only */

/* This file applies to AMD64 products.
 * The definitions come from the AMD64 Programmers Manual vol2
 * Revision 3.30 and/or the device's BKDG.
 */

#ifndef CPU_AMD_CPUID_H
#define CPU_AMD_CPUID_H

#define CPUID_L1_TLB_CACHE_IDS		0x80000005
/* Fn0x80000005_EAX */
#define  L1_DAT_TLB_2M4M_ASSOC_SHFT	24
#define  L1_DAT_TLB_2M4M_ASSOC_MASK	(0xff << L1_DAT_TLB_2M4M_ASSOC_SHFT)
#define  L1_DAT_TLB_2M4M_SIZE_SHFT	16
#define  L1_DAT_TLB_2M4M_SIZE_MASK	(0xff << L1_DAT_TLB_2M4M_SIZE_SHFT)
#define  L1_INST_TLB_2M4M_ASSOC_SHFT	8
#define  L1_INST_TLB_2M4M_ASSOC_MASK	(0xff << L1_INST_TLB_2M4M_ASSOC_SHFT)
#define  L1_INST_TLB_2M4M_SIZE_SHFT	0
#define  L1_INST_TLB_2M4M_SIZE_MASK	(0xff << L1_INST_TLB_2M4M_SIZE_SHFT)
/* Fn0x80000005_EBX */
#define  L1_DAT_TLB_4K_ASSOC_SHFT	24
#define  L1_DAT_TLB_4K_ASSOC_MASK	(0xff << L1_DAT_TLB_4K_ASSOC_SHFT)
#define  L1_DAT_TLB_4K_SIZE_SHFT	16
#define  L1_DAT_TLB_4K_SIZE_MASK	(0xff << L1_DAT_TLB_4K_SIZE_SHFT)
#define  L1_INST_TLB_4K_ASSOC_SHFT	8
#define  L1_INST_TLB_4K_ASSOC_MASK	(0xff << L1_INST_TLB_4K_ASSOC_SHFT)
#define  L1_INST_TLB_4K_SIZE_SHFT	0
#define  L1_INST_TLB_4K_SIZE_MASK	(0xff << L1_INST_TLB_4K_SIZE_SHFT)
/* Fn0x80000005_ECX */
#define  L1_DC_SIZE_SHFT		24
#define  L1_DC_SIZE_MASK		(0xff << L1_DC_SIZE_SHFT)
#define  L1_DC_ASSOC_SHFT		16
#define  L1_DC_ASSOC_MASK		(0xff << L1_DC_ASSOC_SHFT)
#define  L1_DC_LINE_TAG_SHFT		8
#define  L1_DC_LINE_TAG_MASK		(0xff << L1_DC_LINE_TAG_SHFT)
#define  L1_DC_LINE_SIZE_SHFT		0
#define  L1_DC_LINE_SIZE_MASK		(0xff << L1_DC_LINE_SIZE_SHFT)
/* Fn0x80000005_EDX */
#define  L1_IC_SIZE_SHFT		24
#define  L1_IC_SIZE_MASK		(0xff << L1_IC_SIZE_SHFT)
#define  L1_IC_ASSOC_SHFT		16
#define  L1_IC_ASSOC_MASK		(0xff << L1_IC_ASSOC_SHFT)
#define  L1_IC_LINE_TAG_SHFT		8
#define  L1_IC_LINE_TAG_MASK		(0xff << L1_IC_LINE_TAG_SHFT)
#define  L1_IC_LINE_SIZE_SHFT		0
#define  L1_IC_LINE_SIZE_MASK		(0xff << L1_IC_LINE_SIZE_SHFT)

#define CPUID_L2_L3_CACHE_L2_TLB_IDS	0x80000006
/* Fn0x80000006_EAX */
#define  L2_DAT_TLB_2M4M_ASSOC_SHFT	28
#define  L2_DAT_TLB_2M4M_ASSOC_MASK	(0xf << L2_DAT_TLB_2M4M_ASSOC_SHFT)
#define  L2_DAT_TLB_2M4M_SIZE_SHFT	16
#define  L2_DAT_TLB_2M4M_SIZE_MASK	(0xfff << L2_DAT_TLB_2M4M_SIZE_SHFT)
#define  L2_INST_TLB_2M4M_ASSOC_SHFT	12
#define  L2_INST_TLB_2M4M_ASSOC_MASK	(0xf << L2_INST_TLB_2M4M_ASSOC_SHFT)
#define  L2_INST_TLB_2M4M_SIZE_SHFT	0
#define  L2_INST_TLB_2M4M_SIZE_MASK	(0xfff << L2_INST_TLB_2M4M_SIZE_SHFT)
/*Fn0x80000006_EBX */
#define  L2_DAT_TLB_4K_ASSOC_SHFT	28
#define  L2_DAT_TLB_4K_ASSOC_MASK	(0xf << L2_DAT_TLB_4K_ASSOC_SHFT)
#define  L2_DAT_TLB_4K_SIZE_SHFT	16
#define  L2_DAT_TLB_4K_SIZE_MASK	(0xfff << L2_DAT_TLB_4K_SIZE_SHFT)
#define  L2_INST_TLB_4K_ASSOC_SHFT	12
#define  L2_INST_TLB_4K_ASSOC_MASK	(0xf << L2_INST_TLB_4K_ASSOC_SHFT)
#define  L2_INST_TLB_4K_SIZE_SHFT	0
#define  L2_INST_TLB_4K_SIZE_MASK	(0xfff << L2_INST_TLB_4K_SIZE_SHFT)
/* Fn0x80000006_ECX */
#define  L2_DC_SIZE_SHFT		16
#define  L2_DC_SIZE_MASK		(0xffff << L2_DC_SIZE_SHFT)
#define  L2_DC_ASSOC_SHFT		12
#define  L2_DC_ASSOC_MASK		(0xf << L2_DC_ASSOC_SHFT)
#define  L2_DC_LINE_TAG_SHFT		8
#define  L2_DC_LINE_TAG_MASK		(0xf << L2_DC_LINE_TAG_SHFT)
#define  L2_DC_LINE_SIZE_SHFT		0
#define  L2_DC_LINE_SIZE_MASK		(0xff << L2_DC_LINE_SIZE_SHFT)
/* Fn0x80000006_EDX */
#define  L3_DC_SIZE_SHFT		18
#define  L3_DC_SIZE_MASK		(0x3fff << L3_DC_SIZE_SHFT)
#define  L3_DC_ASSOC_SHFT		12
#define  L3_DC_ASSOC_MASK		(0xf << L3_DC_ASSOC_SHFT)
#define  L3_DC_LINE_TAG_SHFT		8
#define  L3_DC_LINE_TAG_MASK		(0xf << L3_DC_LINE_TAG_SHFT)
#define  L3_DC_LINE_SIZE_SHFT		0
#define  L3_DC_LINE_SIZE_MASK		(0xff << L3_DC_LINE_SIZE_SHFT)

#define CPUID_EXT_PM			0x80000007
#define CPUID_MODEL			1

#define CPUID_TLB_L1L2_1G_IDS		0x80000019
/* Fn0x80000019_EAX */
#define  L1_DAT_TLB_1G_ASSOC_SHFT	28
#define  L1_DAT_TLB_1G_ASSOC_MASK	(0xf << L1_DAT_TLB_1G_ASSOC_SHFT)
#define  L1_DAT_TLB_1G_SIZE_SHFT	16
#define  L1_DAT_TLB_1G_SIZE_MASK	(0xfff << L1_DAT_TLB_1G_SIZE_SHFT)
#define  L1_INST_TLB_1G_ASSOC_SHFT	12
#define  L1_INST_TLB_1G_ASSOC_MASK	(0xf << L1_INST_TLB_1G_ASSOC_SHFT)
#define  L1_INST_TLB_1G_SIZE_SHFT	0
#define  L1_INST_TLB_1G_SIZE_MASK	(0xfff << L1_INST_TLB_1G_SIZE_SHFT)
/* Fn0x80000019_EBX */
#define  L2_DAT_TLB_1G_ASSOC_SHFT	28
#define  L2_DAT_TLB_1G_ASSOC_MASK	(0xf << L2_DAT_TLB_1G_ASSOC_SHFT)
#define  L2_DAT_TLB_1G_SIZE_SHFT	16
#define  L2_DAT_TLB_1G_SIZE_MASK	(0xfff << L2_DAT_TLB_1G_SIZE_SHFT)
#define  L2_INST_TLB_1G_ASSOC_SHFT	12
#define  L2_INST_TLB_1G_ASSOC_MASK	(0xf << L2_INST_TLB_1G_ASSOC_SHFT)
#define  L2_INST_TLB_1G_SIZE_SHFT	0
#define  L2_INST_TLB_1G_SIZE_MASK	(0xfff << L2_INST_TLB_1G_SIZE_SHFT)

#define CPUID_CACHE_PROPS		0x8000001D
#define  CACHE_PROPS_0			0
#define  CACHE_PROPS_1			1
#define  CACHE_PROPS_2			2
#define  CACHE_PROPS_3			3
#define  NUM_SHARE_CACHE_SHFT		14
#define  NUM_SHARE_CACHE_MASK		(0xfff << NUM_SHARE_CACHE_SHFT)
#define  CACHE_INCLUSIVE_SHFT		1
#define  CACHE_INCLUSIVE_MASK		(0x1 << CACHE_INCLUSIVE_SHFT)

#define CPUID_EBX_CORE_ID		0x8000001E
#define  CPUID_EBX_THREADS_SHIFT	8
#define  CPUID_EBX_THREADS_MASK		(0xff << CPUID_EBX_THREADS_SHIFT)

#define CPUID_EBX_MEM_ENCRYPT		0x8000001f
#define  CPUID_EBX_MEM_ENCRYPT_ADDR_BITS_SHIFT	6
#define  CPUID_EBX_MEM_ENCRYPT_ADDR_BITS_MASK	(0x3f << CPUID_EBX_MEM_ENCRYPT_ADDR_BITS_SHIFT)

#endif /* CPU_AMD_CPUID_H */
