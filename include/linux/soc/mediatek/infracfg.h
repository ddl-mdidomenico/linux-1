/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __SOC_MEDIATEK_INFRACFG_H
#define __SOC_MEDIATEK_INFRACFG_H

#define MT8195_TOP_AXI_PROT_EN_STA1                     0x228
#define MT8195_TOP_AXI_PROT_EN_1_STA1                   0x258
#define MT8195_TOP_AXI_PROT_EN_SET			0x2a0
#define MT8195_TOP_AXI_PROT_EN_CLR                      0x2a4
#define MT8195_TOP_AXI_PROT_EN_1_SET                    0x2a8
#define MT8195_TOP_AXI_PROT_EN_1_CLR                    0x2ac
#define MT8195_TOP_AXI_PROT_EN_MM_SET                   0x2d4
#define MT8195_TOP_AXI_PROT_EN_MM_CLR                   0x2d8
#define MT8195_TOP_AXI_PROT_EN_MM_STA1                  0x2ec
#define MT8195_TOP_AXI_PROT_EN_2_SET                    0x714
#define MT8195_TOP_AXI_PROT_EN_2_CLR                    0x718
#define MT8195_TOP_AXI_PROT_EN_2_STA1                   0x724
#define MT8195_TOP_AXI_PROT_EN_VDNR_SET                 0xb84
#define MT8195_TOP_AXI_PROT_EN_VDNR_CLR                 0xb88
#define MT8195_TOP_AXI_PROT_EN_VDNR_STA1                0xb90
#define MT8195_TOP_AXI_PROT_EN_VDNR_1_SET               0xba4
#define MT8195_TOP_AXI_PROT_EN_VDNR_1_CLR               0xba8
#define MT8195_TOP_AXI_PROT_EN_VDNR_1_STA1              0xbb0
#define MT8195_TOP_AXI_PROT_EN_VDNR_2_SET               0xbb8
#define MT8195_TOP_AXI_PROT_EN_VDNR_2_CLR               0xbbc
#define MT8195_TOP_AXI_PROT_EN_VDNR_2_STA1              0xbc4
#define MT8195_TOP_AXI_PROT_EN_SUB_INFRA_VDNR_SET       0xbcc
#define MT8195_TOP_AXI_PROT_EN_SUB_INFRA_VDNR_CLR       0xbd0
#define MT8195_TOP_AXI_PROT_EN_SUB_INFRA_VDNR_STA1      0xbd8
#define MT8195_TOP_AXI_PROT_EN_MM_2_SET                 0xdcc
#define MT8195_TOP_AXI_PROT_EN_MM_2_CLR                 0xdd0
#define MT8195_TOP_AXI_PROT_EN_MM_2_STA1                0xdd8

#define MT8195_TOP_AXI_PROT_EN_VDOSYS0			BIT(6)
#define MT8195_TOP_AXI_PROT_EN_VPPSYS0			BIT(10)
#define MT8195_TOP_AXI_PROT_EN_MFG1			BIT(11)
#define MT8195_TOP_AXI_PROT_EN_MFG1_2ND			GENMASK(22, 21)
#define MT8195_TOP_AXI_PROT_EN_VPPSYS0_2ND		BIT(23)
#define MT8195_TOP_AXI_PROT_EN_1_MFG1			GENMASK(20, 19)
#define MT8195_TOP_AXI_PROT_EN_1_CAM			BIT(22)
#define MT8195_TOP_AXI_PROT_EN_2_CAM			BIT(0)
#define MT8195_TOP_AXI_PROT_EN_2_MFG1_2ND		GENMASK(6, 5)
#define MT8195_TOP_AXI_PROT_EN_2_MFG1			BIT(7)
#define MT8195_TOP_AXI_PROT_EN_2_AUDIO			(BIT(9) | BIT(11))
#define MT8195_TOP_AXI_PROT_EN_2_ADSP			(BIT(12) | GENMASK(16, 14))
#define MT8195_TOP_AXI_PROT_EN_MM_CAM			(BIT(0) | BIT(2) | BIT(4))
#define MT8195_TOP_AXI_PROT_EN_MM_IPE			BIT(1)
#define MT8195_TOP_AXI_PROT_EN_MM_IMG			BIT(3)
#define MT8195_TOP_AXI_PROT_EN_MM_VDOSYS0		GENMASK(21, 17)
#define MT8195_TOP_AXI_PROT_EN_MM_VPPSYS1		GENMASK(8, 5)
#define MT8195_TOP_AXI_PROT_EN_MM_VENC			(BIT(9) | BIT(11))
#define MT8195_TOP_AXI_PROT_EN_MM_VENC_CORE1		(BIT(10) | BIT(12))
#define MT8195_TOP_AXI_PROT_EN_MM_VDEC0			BIT(13)
#define MT8195_TOP_AXI_PROT_EN_MM_VDEC1			BIT(14)
#define MT8195_TOP_AXI_PROT_EN_MM_VDOSYS1_2ND		BIT(22)
#define MT8195_TOP_AXI_PROT_EN_MM_VPPSYS1_2ND		BIT(23)
#define MT8195_TOP_AXI_PROT_EN_MM_CAM_2ND		BIT(24)
#define MT8195_TOP_AXI_PROT_EN_MM_IMG_2ND		BIT(25)
#define MT8195_TOP_AXI_PROT_EN_MM_VENC_2ND		BIT(26)
#define MT8195_TOP_AXI_PROT_EN_MM_WPESYS		BIT(27)
#define MT8195_TOP_AXI_PROT_EN_MM_VDEC0_2ND		BIT(28)
#define MT8195_TOP_AXI_PROT_EN_MM_VDEC1_2ND		BIT(29)
#define MT8195_TOP_AXI_PROT_EN_MM_VDOSYS1		GENMASK(31, 30)
#define MT8195_TOP_AXI_PROT_EN_MM_2_VPPSYS0_2ND		(GENMASK(1, 0) | BIT(4) | BIT(11))
#define MT8195_TOP_AXI_PROT_EN_MM_2_VENC		BIT(2)
#define MT8195_TOP_AXI_PROT_EN_MM_2_VENC_CORE1		(BIT(3) | BIT(15))
#define MT8195_TOP_AXI_PROT_EN_MM_2_CAM			(BIT(5) | BIT(17))
#define MT8195_TOP_AXI_PROT_EN_MM_2_VPPSYS1		(GENMASK(7, 6) | BIT(18))
#define MT8195_TOP_AXI_PROT_EN_MM_2_VPPSYS0		GENMASK(9, 8)
#define MT8195_TOP_AXI_PROT_EN_MM_2_VDOSYS1		BIT(10)
#define MT8195_TOP_AXI_PROT_EN_MM_2_VDEC2_2ND		BIT(12)
#define MT8195_TOP_AXI_PROT_EN_MM_2_VDEC0_2ND		BIT(13)
#define MT8195_TOP_AXI_PROT_EN_MM_2_WPESYS_2ND		BIT(14)
#define MT8195_TOP_AXI_PROT_EN_MM_2_IPE			BIT(16)
#define MT8195_TOP_AXI_PROT_EN_MM_2_VDEC2		BIT(21)
#define MT8195_TOP_AXI_PROT_EN_MM_2_VDEC0		BIT(22)
#define MT8195_TOP_AXI_PROT_EN_MM_2_WPESYS		GENMASK(24, 23)
#define MT8195_TOP_AXI_PROT_EN_VDNR_1_EPD_TX		BIT(1)
#define MT8195_TOP_AXI_PROT_EN_VDNR_1_DP_TX		BIT(2)
#define MT8195_TOP_AXI_PROT_EN_VDNR_PCIE_MAC_P0		(BIT(11) | BIT(28))
#define MT8195_TOP_AXI_PROT_EN_VDNR_PCIE_MAC_P1		(BIT(12) | BIT(29))
#define MT8195_TOP_AXI_PROT_EN_VDNR_1_PCIE_MAC_P0	BIT(13)
#define MT8195_TOP_AXI_PROT_EN_VDNR_1_PCIE_MAC_P1	BIT(14)
#define MT8195_TOP_AXI_PROT_EN_SUB_INFRA_VDNR_MFG1	(BIT(17) | BIT(19))
#define MT8195_TOP_AXI_PROT_EN_SUB_INFRA_VDNR_VPPSYS0	BIT(20)
#define MT8195_TOP_AXI_PROT_EN_SUB_INFRA_VDNR_VDOSYS0	BIT(21)

#define MT8192_TOP_AXI_PROT_EN_STA1			0x228
#define MT8192_TOP_AXI_PROT_EN_1_STA1			0x258
#define MT8192_TOP_AXI_PROT_EN_SET			0x2a0
#define MT8192_TOP_AXI_PROT_EN_CLR			0x2a4
#define MT8192_TOP_AXI_PROT_EN_1_SET			0x2a8
#define MT8192_TOP_AXI_PROT_EN_1_CLR			0x2ac
#define MT8192_TOP_AXI_PROT_EN_MM_SET			0x2d4
#define MT8192_TOP_AXI_PROT_EN_MM_CLR			0x2d8
#define MT8192_TOP_AXI_PROT_EN_MM_STA1			0x2ec
#define MT8192_TOP_AXI_PROT_EN_2_SET			0x714
#define MT8192_TOP_AXI_PROT_EN_2_CLR			0x718
#define MT8192_TOP_AXI_PROT_EN_2_STA1			0x724
#define MT8192_TOP_AXI_PROT_EN_VDNR_SET			0xb84
#define MT8192_TOP_AXI_PROT_EN_VDNR_CLR			0xb88
#define MT8192_TOP_AXI_PROT_EN_VDNR_STA1		0xb90
#define MT8192_TOP_AXI_PROT_EN_MM_2_SET			0xdcc
#define MT8192_TOP_AXI_PROT_EN_MM_2_CLR			0xdd0
#define MT8192_TOP_AXI_PROT_EN_MM_2_STA1		0xdd8

#define MT8192_TOP_AXI_PROT_EN_DISP			(BIT(6) | BIT(23))
#define MT8192_TOP_AXI_PROT_EN_CONN			(BIT(13) | BIT(18))
#define MT8192_TOP_AXI_PROT_EN_CONN_2ND			BIT(14)
#define MT8192_TOP_AXI_PROT_EN_MFG1			GENMASK(22, 21)
#define MT8192_TOP_AXI_PROT_EN_1_CONN			BIT(10)
#define MT8192_TOP_AXI_PROT_EN_1_MFG1			BIT(21)
#define MT8192_TOP_AXI_PROT_EN_1_CAM			BIT(22)
#define MT8192_TOP_AXI_PROT_EN_2_CAM			BIT(0)
#define MT8192_TOP_AXI_PROT_EN_2_ADSP			BIT(3)
#define MT8192_TOP_AXI_PROT_EN_2_AUDIO			BIT(4)
#define MT8192_TOP_AXI_PROT_EN_2_MFG1			GENMASK(6, 5)
#define MT8192_TOP_AXI_PROT_EN_2_MFG1_2ND		BIT(7)
#define MT8192_TOP_AXI_PROT_EN_MM_CAM			(BIT(0) | BIT(2))
#define MT8192_TOP_AXI_PROT_EN_MM_DISP			(BIT(0) | BIT(2) | \
							BIT(10) | BIT(12) | \
							BIT(14) | BIT(16) | \
							BIT(24) | BIT(26))
#define MT8192_TOP_AXI_PROT_EN_MM_CAM_2ND		(BIT(1) | BIT(3))
#define MT8192_TOP_AXI_PROT_EN_MM_DISP_2ND		(BIT(1) | BIT(3) | \
							BIT(15) | BIT(17) | \
							BIT(25) | BIT(27))
#define MT8192_TOP_AXI_PROT_EN_MM_ISP2			BIT(14)
#define MT8192_TOP_AXI_PROT_EN_MM_ISP2_2ND		BIT(15)
#define MT8192_TOP_AXI_PROT_EN_MM_IPE			BIT(16)
#define MT8192_TOP_AXI_PROT_EN_MM_IPE_2ND		BIT(17)
#define MT8192_TOP_AXI_PROT_EN_MM_VDEC			BIT(24)
#define MT8192_TOP_AXI_PROT_EN_MM_VDEC_2ND		BIT(25)
#define MT8192_TOP_AXI_PROT_EN_MM_VENC			BIT(26)
#define MT8192_TOP_AXI_PROT_EN_MM_VENC_2ND		BIT(27)
#define MT8192_TOP_AXI_PROT_EN_MM_2_ISP			BIT(8)
#define MT8192_TOP_AXI_PROT_EN_MM_2_DISP		(BIT(8) | BIT(12))
#define MT8192_TOP_AXI_PROT_EN_MM_2_ISP_2ND		BIT(9)
#define MT8192_TOP_AXI_PROT_EN_MM_2_DISP_2ND		(BIT(9) | BIT(13))
#define MT8192_TOP_AXI_PROT_EN_MM_2_MDP			BIT(12)
#define MT8192_TOP_AXI_PROT_EN_MM_2_MDP_2ND		BIT(13)
#define MT8192_TOP_AXI_PROT_EN_VDNR_CAM			BIT(21)

#define MT8186_TOP_AXI_PROT_EN_SET			(0x2A0)
#define MT8186_TOP_AXI_PROT_EN_CLR			(0x2A4)
#define MT8186_TOP_AXI_PROT_EN_STA			(0x228)
#define MT8186_TOP_AXI_PROT_EN_1_SET			(0x2A8)
#define MT8186_TOP_AXI_PROT_EN_1_CLR			(0x2AC)
#define MT8186_TOP_AXI_PROT_EN_1_STA			(0x258)
#define MT8186_TOP_AXI_PROT_EN_2_SET			(0x2B0)
#define MT8186_TOP_AXI_PROT_EN_2_CLR			(0x2B4)
#define MT8186_TOP_AXI_PROT_EN_2_STA			(0x26C)
#define MT8186_TOP_AXI_PROT_EN_3_SET			(0x2B8)
#define MT8186_TOP_AXI_PROT_EN_3_CLR			(0x2BC)
#define MT8186_TOP_AXI_PROT_EN_3_STA			(0x2C8)

/* MFG1 */
#define MT8186_TOP_AXI_PROT_EN_1_MFG1_STEP1		(GENMASK(28, 27))
#define MT8186_TOP_AXI_PROT_EN_MFG1_STEP2		(GENMASK(22, 21))
#define MT8186_TOP_AXI_PROT_EN_MFG1_STEP3		(BIT(25))
#define MT8186_TOP_AXI_PROT_EN_1_MFG1_STEP4		(BIT(29))
/* DIS */
#define MT8186_TOP_AXI_PROT_EN_1_DIS_STEP1		(GENMASK(12, 11))
#define MT8186_TOP_AXI_PROT_EN_DIS_STEP2		(GENMASK(2, 1) | GENMASK(11, 10))
/* IMG */
#define MT8186_TOP_AXI_PROT_EN_1_IMG_STEP1		(BIT(23))
#define MT8186_TOP_AXI_PROT_EN_1_IMG_STEP2		(BIT(15))
/* IPE */
#define MT8186_TOP_AXI_PROT_EN_1_IPE_STEP1		(BIT(24))
#define MT8186_TOP_AXI_PROT_EN_1_IPE_STEP2		(BIT(16))
/* CAM */
#define MT8186_TOP_AXI_PROT_EN_1_CAM_STEP1		(GENMASK(22, 21))
#define MT8186_TOP_AXI_PROT_EN_1_CAM_STEP2		(GENMASK(14, 13))
/* VENC */
#define MT8186_TOP_AXI_PROT_EN_1_VENC_STEP1		(BIT(31))
#define MT8186_TOP_AXI_PROT_EN_1_VENC_STEP2		(BIT(19))
/* VDEC */
#define MT8186_TOP_AXI_PROT_EN_1_VDEC_STEP1		(BIT(30))
#define MT8186_TOP_AXI_PROT_EN_1_VDEC_STEP2		(BIT(17))
/* WPE */
#define MT8186_TOP_AXI_PROT_EN_2_WPE_STEP1		(BIT(17))
#define MT8186_TOP_AXI_PROT_EN_2_WPE_STEP2		(BIT(16))
/* CONN_ON */
#define MT8186_TOP_AXI_PROT_EN_1_CONN_ON_STEP1		(BIT(18))
#define MT8186_TOP_AXI_PROT_EN_CONN_ON_STEP2		(BIT(14))
#define MT8186_TOP_AXI_PROT_EN_CONN_ON_STEP3		(BIT(13))
#define MT8186_TOP_AXI_PROT_EN_CONN_ON_STEP4		(BIT(16))
/* ADSP_TOP */
#define MT8186_TOP_AXI_PROT_EN_3_ADSP_TOP_STEP1		(GENMASK(12, 11))
#define MT8186_TOP_AXI_PROT_EN_3_ADSP_TOP_STEP2		(GENMASK(1, 0))

#define MT8183_TOP_AXI_PROT_EN_STA1			0x228
#define MT8183_TOP_AXI_PROT_EN_STA1_1			0x258
#define MT8183_TOP_AXI_PROT_EN_SET			0x2a0
#define MT8183_TOP_AXI_PROT_EN_CLR			0x2a4
#define MT8183_TOP_AXI_PROT_EN_1_SET			0x2a8
#define MT8183_TOP_AXI_PROT_EN_1_CLR			0x2ac
#define MT8183_TOP_AXI_PROT_EN_MCU_SET			0x2c4
#define MT8183_TOP_AXI_PROT_EN_MCU_CLR			0x2c8
#define MT8183_TOP_AXI_PROT_EN_MCU_STA1			0x2e4
#define MT8183_TOP_AXI_PROT_EN_MM_SET			0x2d4
#define MT8183_TOP_AXI_PROT_EN_MM_CLR			0x2d8
#define MT8183_TOP_AXI_PROT_EN_MM_STA1			0x2ec

#define MT8183_TOP_AXI_PROT_EN_DISP			(BIT(10) | BIT(11))
#define MT8183_TOP_AXI_PROT_EN_CONN			(BIT(13) | BIT(14))
#define MT8183_TOP_AXI_PROT_EN_MFG			(BIT(21) | BIT(22))
#define MT8183_TOP_AXI_PROT_EN_CAM			BIT(28)
#define MT8183_TOP_AXI_PROT_EN_VPU_TOP			BIT(27)
#define MT8183_TOP_AXI_PROT_EN_1_DISP			(BIT(16) | BIT(17))
#define MT8183_TOP_AXI_PROT_EN_1_MFG			GENMASK(21, 19)
#define MT8183_TOP_AXI_PROT_EN_MM_ISP			(BIT(3) | BIT(8))
#define MT8183_TOP_AXI_PROT_EN_MM_ISP_2ND		BIT(10)
#define MT8183_TOP_AXI_PROT_EN_MM_CAM			(BIT(4) | BIT(5) | \
							 BIT(9) | BIT(13))
#define MT8183_TOP_AXI_PROT_EN_MM_VPU_TOP		(GENMASK(9, 6) | \
							 BIT(12))
#define MT8183_TOP_AXI_PROT_EN_MM_VPU_TOP_2ND		(BIT(10) | BIT(11))
#define MT8183_TOP_AXI_PROT_EN_MM_CAM_2ND		BIT(11)
#define MT8183_TOP_AXI_PROT_EN_MCU_VPU_CORE0_2ND	(BIT(0) | BIT(2) | \
							 BIT(4))
#define MT8183_TOP_AXI_PROT_EN_MCU_VPU_CORE1_2ND	(BIT(1) | BIT(3) | \
							 BIT(5))
#define MT8183_TOP_AXI_PROT_EN_MCU_VPU_CORE0		BIT(6)
#define MT8183_TOP_AXI_PROT_EN_MCU_VPU_CORE1		BIT(7)

#define MT8183_SMI_COMMON_CLAMP_EN			0x3c0
#define MT8183_SMI_COMMON_CLAMP_EN_SET			0x3c4
#define MT8183_SMI_COMMON_CLAMP_EN_CLR			0x3c8

#define MT8183_SMI_COMMON_SMI_CLAMP_DISP		GENMASK(7, 0)
#define MT8183_SMI_COMMON_SMI_CLAMP_VENC		BIT(1)
#define MT8183_SMI_COMMON_SMI_CLAMP_ISP			BIT(2)
#define MT8183_SMI_COMMON_SMI_CLAMP_CAM			(BIT(3) | BIT(4))
#define MT8183_SMI_COMMON_SMI_CLAMP_VPU_TOP		(BIT(5) | BIT(6))
#define MT8183_SMI_COMMON_SMI_CLAMP_VDEC		BIT(7)

#define MT8173_TOP_AXI_PROT_EN_MCI_M2		BIT(0)
#define MT8173_TOP_AXI_PROT_EN_MM_M0		BIT(1)
#define MT8173_TOP_AXI_PROT_EN_MM_M1		BIT(2)
#define MT8173_TOP_AXI_PROT_EN_MMAPB_S		BIT(6)
#define MT8173_TOP_AXI_PROT_EN_L2C_M2		BIT(9)
#define MT8173_TOP_AXI_PROT_EN_L2SS_SMI		BIT(11)
#define MT8173_TOP_AXI_PROT_EN_L2SS_ADD		BIT(12)
#define MT8173_TOP_AXI_PROT_EN_CCI_M2		BIT(13)
#define MT8173_TOP_AXI_PROT_EN_MFG_S		BIT(14)
#define MT8173_TOP_AXI_PROT_EN_PERI_M0		BIT(15)
#define MT8173_TOP_AXI_PROT_EN_PERI_M1		BIT(16)
#define MT8173_TOP_AXI_PROT_EN_DEBUGSYS		BIT(17)
#define MT8173_TOP_AXI_PROT_EN_CQ_DMA		BIT(18)
#define MT8173_TOP_AXI_PROT_EN_GCPU		BIT(19)
#define MT8173_TOP_AXI_PROT_EN_IOMMU		BIT(20)
#define MT8173_TOP_AXI_PROT_EN_MFG_M0		BIT(21)
#define MT8173_TOP_AXI_PROT_EN_MFG_M1		BIT(22)
#define MT8173_TOP_AXI_PROT_EN_MFG_SNOOP_OUT	BIT(23)

#define MT8167_TOP_AXI_PROT_EN_MM_EMI		BIT(1)
#define MT8167_TOP_AXI_PROT_EN_MCU_MFG		BIT(2)
#define MT8167_TOP_AXI_PROT_EN_CONN_EMI		BIT(4)
#define MT8167_TOP_AXI_PROT_EN_MFG_EMI		BIT(5)
#define MT8167_TOP_AXI_PROT_EN_CONN_MCU		BIT(8)
#define MT8167_TOP_AXI_PROT_EN_MCU_CONN		BIT(9)
#define MT8167_TOP_AXI_PROT_EN_MCU_MM		BIT(11)

#define MT2701_TOP_AXI_PROT_EN_MM_M0		BIT(1)
#define MT2701_TOP_AXI_PROT_EN_CONN_M		BIT(2)
#define MT2701_TOP_AXI_PROT_EN_CONN_S		BIT(8)

#define MT7622_TOP_AXI_PROT_EN_ETHSYS		(BIT(3) | BIT(17))
#define MT7622_TOP_AXI_PROT_EN_HIF0		(BIT(24) | BIT(25))
#define MT7622_TOP_AXI_PROT_EN_HIF1		(BIT(26) | BIT(27) | \
						 BIT(28))
#define MT7622_TOP_AXI_PROT_EN_WB		(BIT(2) | BIT(6) | \
						 BIT(7) | BIT(8))

#define INFRA_TOPAXI_PROTECTEN			0x0220
#define INFRA_TOPAXI_PROTECTSTA1		0x0228
#define INFRA_TOPAXI_PROTECTEN_SET		0x0260
#define INFRA_TOPAXI_PROTECTEN_CLR		0x0264

#define MT8192_INFRA_CTRL			0x290
#define MT8192_INFRA_CTRL_DISABLE_MFG2ACP	BIT(9)

#define REG_INFRA_MISC				0xf00
#define F_DDR_4GB_SUPPORT_EN			BIT(13)

int mtk_infracfg_set_bus_protection(struct regmap *infracfg, u32 mask,
		bool reg_update);
int mtk_infracfg_clear_bus_protection(struct regmap *infracfg, u32 mask,
		bool reg_update);
#endif /* __SOC_MEDIATEK_INFRACFG_H */
