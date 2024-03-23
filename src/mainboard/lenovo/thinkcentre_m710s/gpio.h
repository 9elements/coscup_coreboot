/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef CFG_GPIO_H
#define CFG_GPIO_H

#include <gpio.h>

static const struct pad_config gpio_table[] = {
	/* ------- GPIO Community 0 ------- */

	/* ------- GPIO Group GPP_A ------- */

	PAD_CFG_NF(GPP_A0, NONE, PLTRST, NF1),		// KBRST#
	PAD_CFG_NF(GPP_A1, UP_20K, PLTRST, NF1),	// LPC_AD0
	PAD_CFG_NF(GPP_A2, UP_20K, PLTRST, NF1),	// LPC_AD1
	PAD_CFG_NF(GPP_A3, UP_20K, PLTRST, NF1),	// LPC_AD2
	PAD_CFG_NF(GPP_A4, UP_20K, PLTRST, NF1),	// LPC_AD3
	PAD_CFG_NF(GPP_A5, NONE, PLTRST, NF1),		// LPC_FRAME#
	PAD_CFG_NF(GPP_A6, NONE, PLTRST, NF1),		// LPC_SERIRQ
	PAD_CFG_NF(GPP_A7, NONE, PLTRST, NF1),		// LPC_DRQ#0
	PAD_CFG_NF(GPP_A8, NONE, PLTRST, NF1),		// TPM_CLKRUN
	PAD_CFG_NF(GPP_A9, DN_20K, PLTRST, NF1),	// CLK_LPC_24M
	PAD_CFG_NF(GPP_A10, DN_20K, PLTRST, NF1),	// CLK_PCI_24M
	PAD_CFG_NF(GPP_A11, NONE, PLTRST, NF1),		// SIO_PME#
	PAD_CFG_GPO(GPP_A12, 1, PLTRST),		// BMBUSY#
	PAD_CFG_NF(GPP_A13, NONE, DEEP, NF1),		// PCH_SUSWARN#
	PAD_NC(GPP_A14, NONE),
	PAD_CFG_NF(GPP_A15, UP_20K, DEEP, NF1),		// PCH_SUSACK#
	PAD_NC(GPP_A16, NONE),
	PAD_NC(GPP_A17, NONE),
	PAD_NC(GPP_A18, NONE),
	PAD_NC(GPP_A19, NONE),
	PAD_CFG_GPO(GPP_A20, 1, PLTRST),		// TPM_GPIO
	PAD_NC(GPP_A21, NONE),
	PAD_NC(GPP_A22, NONE),
	PAD_CFG_GPO(GPP_A23, 1, PLTRST),		// TPM_EN

	/* ------- GPIO Group GPP_B ------- */

	PAD_CFG_GPI_TRIG_OWN(GPP_B0, NONE, PLTRST, OFF, ACPI),		// FUSB_G1
	PAD_CFG_GPI_TRIG_OWN(GPP_B1, NONE, PLTRST, OFF, ACPI),		// FUSB_G2
	PAD_CFG_GPI_TRIG_OWN(GPP_B2, NONE, PLTRST, OFF, ACPI),		// VR_ALERT#
	PAD_NC(GPP_B3, NONE),
	PAD_CFG_GPI_TRIG_OWN(GPP_B4, NONE, PLTRST, OFF, ACPI),		// LPT_DET#
	PAD_CFG_GPI_TRIG_OWN(GPP_B5, NONE, PLTRST, OFF, ACPI),		// COM_GPIO1
	PAD_CFG_GPI_TRIG_OWN(GPP_B6, NONE, PLTRST, OFF, ACPI),		// CLKREQ_WLAN#
	PAD_CFG_NF(GPP_B7, NONE, DEEP, NF1),				// PCIEX16_PRSNT
	PAD_NC(GPP_B8, NONE),						// PCI_PRSNT#
	PAD_NC(GPP_B9, NONE),
	PAD_CFG_GPI_TRIG_OWN(GPP_B10, NONE, PLTRST, OFF, ACPI),		// CLKREQ_LAN#
	PAD_NC(GPP_B11, NONE),
	PAD_CFG_GPO(GPP_B12, 1, DEEP),					// SLP_S0#
	PAD_CFG_NF(GPP_B13, NONE, DEEP, NF1),				// PLTRST#
	PAD_CFG_NF(GPP_B14, DN_20K, PLTRST, NF1),			// SPKR
	PAD_NC(GPP_B15, NONE),
	PAD_NC(GPP_B16, NONE),
	PAD_NC(GPP_B17, NONE),
	PAD_CFG_NF(GPP_B18, NONE, PLTRST, NF1),				// LPSS_GSPI0_MOSI
	PAD_NC(GPP_B19, NONE),
	PAD_CFG_GPI_SMI(GPP_B20, NONE, DEEP, EDGE_SINGLE, INVERT),	// SMI#
	PAD_CFG_GPI_TRIG_OWN(GPP_B21, NONE, PLTRST, OFF, ACPI),		// OE#
	PAD_CFG_NF(GPP_B22, NONE, PLTRST, NF1),				// LPSS_GSPI1_MOSI
	PAD_CFG_NF(GPP_B23, DN_20K, DEEP, NF2),				// EXI_STRAP

	/* ------- GPIO Community 1 ------- */

	/* ------- GPIO Group GPP_C ------- */

	PAD_CFG_NF(GPP_C0, NONE, DEEP, NF1),			// SMBCLK
	PAD_CFG_NF(GPP_C1, NONE, DEEP, NF1),			// SMBDATA
	PAD_CFG_NF(GPP_C2, NONE, DEEP, NF1),			// TLS_STRAP
	PAD_CFG_NF(GPP_C3, NONE, DEEP, NF1),			// SML0_CLK
	PAD_CFG_NF(GPP_C4, NONE, DEEP, NF1),			// SML0_DATA
	PAD_CFG_GPI_TRIG_OWN(GPP_C5, DN_20K, DEEP, OFF, ACPI),	// ESPI_LPC_STRAP
	/* GPP_C6 - RESERVED */					// SML1_CLK
	/* GPP_C7 - RESERVED */					// SML1_DATA
	PAD_NC(GPP_C8, NONE),
	PAD_NC(GPP_C9, NONE),
	PAD_NC(GPP_C10, NONE),
	PAD_NC(GPP_C11, NONE),
	PAD_CFG_GPO(GPP_C12, 1, PLTRST),			// TPM_DISABLE
	PAD_CFG_GPO(GPP_C13, 0, PLTRST),			// SSD_SATA_DEVSLP
	PAD_CFG_GPI_TRIG_OWN(GPP_C14, NONE, PLTRST, OFF, ACPI),	// TPM_PRESENT#
	PAD_CFG_GPI_TRIG_OWN(GPP_C15, NONE, PLTRST, OFF, ACPI),	// M2_SSD_DET#
	PAD_NC(GPP_C16, NONE),
	PAD_NC(GPP_C17, NONE),
	PAD_NC(GPP_C18, NONE),
	PAD_NC(GPP_C19, NONE),
	PAD_NC(GPP_C20, NONE),
	PAD_NC(GPP_C21, NONE),					// UART2_TXD
	PAD_NC(GPP_C22, NONE),
	PAD_NC(GPP_C23, NONE),

	/* ------- GPIO Group GPP_D ------- */

	PAD_NC(GPP_D0, NONE),
	PAD_NC(GPP_D1, NONE),
	PAD_CFG_GPI_TRIG_OWN(GPP_D2, NONE, PLTRST, OFF, ACPI),	// PD_PCH_GPP_D_2
	PAD_CFG_GPI_TRIG_OWN(GPP_D3, NONE, PLTRST, OFF, ACPI),	// PD_PCH_GPP_D_3
	PAD_NC(GPP_D4, NONE),
	PAD_NC(GPP_D5, NONE),
	PAD_NC(GPP_D6, NONE),
	PAD_NC(GPP_D7, NONE),
	PAD_NC(GPP_D8, NONE),
	PAD_NC(GPP_D9, NONE),
	PAD_NC(GPP_D10, NONE),
	PAD_NC(GPP_D11, NONE),
	PAD_NC(GPP_D12, NONE),
	PAD_NC(GPP_D13, NONE),
	PAD_CFG_GPO(GPP_D14, 0, PLTRST),			// GPP_D14
	PAD_NC(GPP_D15, NONE),
	PAD_CFG_GPI_TRIG_OWN(GPP_D16, NONE, PLTRST, OFF, ACPI),	// GPP_D16
	PAD_NC(GPP_D17, NONE),
	PAD_NC(GPP_D18, NONE),
	PAD_NC(GPP_D19, NONE),
	PAD_NC(GPP_D20, NONE),
	PAD_NC(GPP_D21, NONE),
	PAD_NC(GPP_D22, NONE),
	PAD_NC(GPP_D23, NONE),

	/* ------- GPIO Group GPP_E ------- */

	PAD_NC(GPP_E0, NONE),
	PAD_NC(GPP_E1, NONE),
	PAD_NC(GPP_E2, NONE),
	PAD_NC(GPP_E3, NONE),
	PAD_NC(GPP_E4, NONE),
	PAD_NC(GPP_E5, NONE),
	PAD_NC(GPP_E6, NONE),
	PAD_NC(GPP_E7, NONE),
	PAD_CFG_NF(GPP_E8, NONE, PLTRST, NF1),	// SATA_LED#
	PAD_CFG_NF(GPP_E9, NONE, DEEP, NF1),	// USB_OC1#
	PAD_CFG_NF(GPP_E10, NONE, DEEP, NF1),	// USB_OC2#
	PAD_CFG_NF(GPP_E11, NONE, DEEP, NF1),	// USB_OC3#
	PAD_CFG_GPO(GPP_E12, 1, DEEP),		// VISACH2_D3

	/* ------- GPIO Group GPP_F ------- */

	PAD_NC(GPP_F0, NONE),
	PAD_NC(GPP_F1, NONE),
	PAD_NC(GPP_F2, NONE),
	PAD_NC(GPP_F3, NONE),
	PAD_NC(GPP_F4, NONE),
	PAD_NC(GPP_F5, NONE),
	PAD_NC(GPP_F6, NONE),
	PAD_NC(GPP_F7, NONE),
	PAD_NC(GPP_F8, NONE),
	PAD_NC(GPP_F9, NONE),
	PAD_CFG_GPI_APIC_HIGH(GPP_F10, NONE, PLTRST),		// PCH_CONFIG_JUMPER
	PAD_CFG_GPI_TRIG_OWN(GPP_F11, NONE, PLTRST, OFF, ACPI),	// PCH_RSVD
	PAD_CFG_GPI_APIC_LOW(GPP_F12, NONE, PLTRST),		// SV_ADVANCE_GP48
	PAD_CFG_GPI_APIC_HIGH(GPP_F13, NONE, PLTRST),		// GP39_GFX_CRB_DETECT
	PAD_CFG_GPI_APIC_LOW(GPP_F14, NONE, DEEP),		// H_SKTOCC#
	PAD_CFG_NF(GPP_F15, NONE, DEEP, NF1),			// USB_OC4#
	PAD_CFG_NF(GPP_F16, NONE, DEEP, NF1),			// USB_OC5#
	PAD_CFG_NF(GPP_F17, NONE, DEEP, NF1),			// USB_OC6#
	PAD_CFG_NF(GPP_F18, NONE, PLTRST, NF1),			// USB2_OCB7
	PAD_NC(GPP_F19, NONE),
	PAD_NC(GPP_F20, NONE),
	PAD_NC(GPP_F21, NONE),
	PAD_CFG_GPO(GPP_F22, 1, PLTRST),			// PCH_GPIO_F22
	PAD_NC(GPP_F23, NONE),

	/* ------- GPIO Group GPP_G ------- */

	PAD_CFG_GPI_TRIG_OWN(GPP_G0, NONE, PLTRST, OFF, ACPI),		// BRD_ID0
	PAD_CFG_GPI_TRIG_OWN(GPP_G1, NONE, PLTRST, OFF, ACPI),		// BRD_ID1
	PAD_CFG_GPI_TRIG_OWN(GPP_G2, NONE, PLTRST, OFF, ACPI),		// BRD_ID2
	PAD_CFG_GPI_TRIG_OWN(GPP_G3, NONE, PLTRST, OFF, ACPI),		// BRD_ID3
	PAD_CFG_GPI_TRIG_OWN(GPP_G4, NONE, PLTRST, OFF, ACPI),		// BRD_ID4
	PAD_CFG_GPI_TRIG_OWN(GPP_G5, NONE, PLTRST, OFF, ACPI),		// BRD_ID5
	PAD_NC(GPP_G6, NONE),
	PAD_NC(GPP_G7, NONE),
	PAD_NC(GPP_G8, NONE),
	PAD_NC(GPP_G9, NONE),
	PAD_NC(GPP_G10, NONE),
	PAD_NC(GPP_G11, NONE),
	PAD_NC(GPP_G12, NONE),
	PAD_NC(GPP_G13, NONE),
	PAD_NC(GPP_G14, NONE),
	PAD_NC(GPP_G15, NONE),
	PAD_NC(GPP_G16, NONE),
	PAD_NC(GPP_G17, NONE),
	PAD_NC(GPP_G18, NONE),
	PAD_NC(GPP_G19, NONE),						// SMI#
	PAD_CFG_GPO(GPP_G20, 1, PLTRST),				// PCH_VGA_HOT_PLUG#
	PAD_CFG_GPI_SCI(GPP_G21, NONE, DEEP, EDGE_SINGLE, INVERT),	// SPI_TPM_PIRQ
	PAD_CFG_GPI_TRIG_OWN(GPP_G22, NONE, PLTRST, OFF, ACPI),		// GPP_G22
	PAD_CFG_GPI_TRIG_OWN(GPP_G23, NONE, PLTRST, OFF, ACPI),		// GPP_G23

	/* ------- GPIO Group GPP_H ------- */

	PAD_CFG_NF(GPP_H0, NONE, PLTRST, NF1),			// CLKREQ_SSD#
	PAD_CFG_GPI_TRIG_OWN(GPP_H1, NONE, PLTRST, OFF, ACPI),	// PCIE1_PRSNT#
	PAD_CFG_GPI_TRIG_OWN(GPP_H2, NONE, PLTRST, OFF, ACPI),	// PCIE2_PRSNT#
	PAD_NC(GPP_H3, NONE),
	PAD_CFG_GPO(GPP_H4, 1, PLTRST),				// CHARGE_EN
	PAD_NC(GPP_H5, NONE),
	PAD_NC(GPP_H6, NONE),
	PAD_NC(GPP_H7, NONE),
	PAD_NC(GPP_H8, NONE),
	PAD_NC(GPP_H9, NONE),
	PAD_CFG_GPO(GPP_H10, 1, PLTRST),			// WIRELESS_EN1
	PAD_CFG_GPO(GPP_H11, 1, PLTRST),			// WIRELESS_EN2
	PAD_CFG_GPO(GPP_H12, 1, PLTRST),			// GPP_H12
	PAD_CFG_GPI_TRIG_OWN(GPP_H13, NONE, PLTRST, OFF, ACPI),	// SEL#
	PAD_NC(GPP_H14, NONE),
	PAD_NC(GPP_H15, NONE),
	PAD_NC(GPP_H16, NONE),
	PAD_NC(GPP_H17, NONE),
	PAD_NC(GPP_H18, NONE),
	PAD_NC(GPP_H19, NONE),
	PAD_CFG_GPI_TRIG_OWN(GPP_H20, NONE, PLTRST, OFF, ACPI),	// CHASSIS_ID1
	PAD_CFG_GPI_TRIG_OWN(GPP_H21, NONE, PLTRST, OFF, ACPI),	// CHASSIS_ID2
	PAD_NC(GPP_H22, NONE),
	PAD_CFG_GPI_TRIG_OWN(GPP_H23, NONE, DEEP, OFF, ACPI),	// CLR_CMOS

	/* ------- GPIO Community 2 ------- */

	/* -------- GPIO Group GPD -------- */

	PAD_CFG_NF(GPD0, NONE, PLTRST, NF1),	// PCH_BATLOW#
	PAD_CFG_NF(GPD1, NONE, PWROK, NF1),	// ACPRESENT
	PAD_CFG_NF(GPD2, NATIVE, PWROK, NF1),	// LAN_WAKE#
	PAD_CFG_NF(GPD3, UP_20K, PWROK, NF1),	// PWRBTN#
	PAD_CFG_NF(GPD4, NONE, PWROK, NF1),	// SLP_S3#
	PAD_CFG_NF(GPD5, NONE, PWROK, NF1),	// SLP_S4#
	PAD_CFG_NF(GPD6, NONE, PWROK, NF1),	// SLP_A#
	PAD_CFG_GPO(GPD7, 1, PWROK),		// ME_DIS
	PAD_CFG_NF(GPD8, NONE, PWROK, NF1),	// SUS_CLK
	PAD_CFG_NF(GPD9, NONE, PWROK, NF1),	// SLP_WLAN#
	PAD_CFG_NF(GPD10, NONE, PWROK, NF1),	// SLP_S5#
	PAD_CFG_GPO(GPD11, 1, PWROK),		// LAN_DISABLE#

	/* ------- GPIO Community 3 ------- */

	/* ------- GPIO Group GPP_I ------- */

	PAD_CFG_NF(GPP_I0, NONE, PLTRST, NF1),		// VGA_HPD
	PAD_CFG_NF(GPP_I1, NONE, PLTRST, NF1),		// DP1_HPD
	PAD_CFG_NF(GPP_I2, NONE, PLTRST, NF1),		// DP2_HPD
	PAD_CFG_NF(GPP_I3, NONE, PLTRST, NF1),		// GPP_I3
	PAD_CFG_NF(GPP_I4, NONE, PLTRST, NF1),		// GPP_I4
	PAD_CFG_GPO(GPP_I5, 1, PLTRST),			// GPP_I5
	PAD_CFG_NF(GPP_I6, DN_20K, PLTRST, NF1),	// GPP_I6
	PAD_CFG_NF(GPP_I7, NONE, PLTRST, NF1),		// DP1_DDC_SCL
	PAD_CFG_NF(GPP_I8, DN_20K, PLTRST, NF1),	// DP1_DDC_SDA
	PAD_CFG_NF(GPP_I9, NONE, PLTRST, NF1),		// DP2_DDC_SCL
	PAD_CFG_NF(GPP_I10, DN_20K, PLTRST, NF1),	// DP2_DDC_SDA
};

#endif /* CFG_GPIO_H */
