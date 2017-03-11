/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6580. Copyright MediaTek Inc. (C) 2013.
 * Mon May 11 11:53:01 2015
 * Do Not Modify the File.
 */

/*************************
 * GPIO PINCTRLMTK File
*************************/

#ifndef __PINCTRL_MTK_MT6580_H
#define __PINCTRL_MTK_MT6580_H

#include <linux/pinctrl/pinctrl.h>
#include "pinctrl-mtk-common.h"

static const struct mtk_desc_pin mtk_pins_mt6580[] = {
	MTK_PIN(
		PINCTRL_PIN(0, "GPIO0"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO0"),
		MTK_FUNCTION(1, "SPI1_CS"),
		MTK_FUNCTION(2, "I2S0_WS"),
		MTK_FUNCTION(3, "USB_IDDIG"),
		MTK_FUNCTION(4, "JTDI"),
		MTK_FUNCTION(5, "SIM2_SCLK"),
		MTK_FUNCTION(6, "EINT0")
	),
	MTK_PIN(
		PINCTRL_PIN(1, "GPIO1"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO1"),
		MTK_FUNCTION(1, "SPI1_SCK"),
		MTK_FUNCTION(2, "I2S0_BCK"),
		MTK_FUNCTION(3, "USB_DRVVBUS"),
		MTK_FUNCTION(4, "JTCK"),
		MTK_FUNCTION(5, "CMCSK"),
		MTK_FUNCTION(6, "MD_EINT1"),
		MTK_FUNCTION(7, "EINT1")
	),
	MTK_PIN(
		PINCTRL_PIN(2, "GPIO2"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO2"),
		MTK_FUNCTION(1, "SPI1_MOSI"),
		MTK_FUNCTION(2, "I2S0_DI"),
		MTK_FUNCTION(3, "SPI1_MISO"),
		MTK_FUNCTION(4, "JTMS"),
		MTK_FUNCTION(5, "CMCSD0"),
		MTK_FUNCTION(6, "EINT2"),
		MTK_FUNCTION(7, "PWM_B")
	),
	MTK_PIN(
		PINCTRL_PIN(3, "GPIO3"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO3"),
		MTK_FUNCTION(1, "SPI1_MISO"),
		MTK_FUNCTION(2, "SIM2_SIO"),
		MTK_FUNCTION(3, "SPI1_MOSI"),
		MTK_FUNCTION(4, "JTDO"),
		MTK_FUNCTION(5, "CMCSD1"),
		MTK_FUNCTION(6, "EINT3"),
		MTK_FUNCTION(7, "DBG1_OUT0")
	),
	MTK_PIN(
		PINCTRL_PIN(4, "GPIO4"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO4"),
		MTK_FUNCTION(1, "I2S3_WS"),
		MTK_FUNCTION(2, "SPI2_CS"),
		MTK_FUNCTION(3, "SIM1_SIO"),
		MTK_FUNCTION(4, "URTS1"),
		MTK_FUNCTION(5, "MD_EINT0"),
		MTK_FUNCTION(6, "EINT4"),
		MTK_FUNCTION(7, "DBG1_OUT1")
	),
	MTK_PIN(
		PINCTRL_PIN(5, "GPIO5"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO5"),
		MTK_FUNCTION(1, "I2S3_BCK"),
		MTK_FUNCTION(2, "SPI2_SCK"),
		MTK_FUNCTION(3, "SIM1_SCLK"),
		MTK_FUNCTION(4, "UCTS1"),
		MTK_FUNCTION(5, "I2C_SCL2"),
		MTK_FUNCTION(6, "EINT5"),
		MTK_FUNCTION(7, "DBG1_OUT2")
	),
	MTK_PIN(
		PINCTRL_PIN(6, "GPIO6"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO6"),
		MTK_FUNCTION(1, "I2S3_DO"),
		MTK_FUNCTION(2, "SPI2_MOSI"),
		MTK_FUNCTION(3, "I2C_SDA2"),
		MTK_FUNCTION(6, "EINT6"),
		MTK_FUNCTION(7, "DBG1_OUT3")
	),
	MTK_PIN(
		PINCTRL_PIN(7, "GPIO7"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO7"),
		MTK_FUNCTION(1, "UTXD2"),
		MTK_FUNCTION(2, "SPI2_MISO"),
		MTK_FUNCTION(3, "MD_UTXD3"),
		MTK_FUNCTION(4, "USB_IDDIG"),
		MTK_FUNCTION(5, "MD_EINT1"),
		MTK_FUNCTION(6, "EINT7"),
		MTK_FUNCTION(7, "DBG1_OUT4")
	),
	MTK_PIN(
		PINCTRL_PIN(8, "GPIO8"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO8"),
		MTK_FUNCTION(1, "URXD2"),
		MTK_FUNCTION(2, "PWM_A"),
		MTK_FUNCTION(3, "MD_URXD3"),
		MTK_FUNCTION(4, "USB_DRVVBUS"),
		MTK_FUNCTION(5, "MD_EINT2"),
		MTK_FUNCTION(6, "EINT8"),
		MTK_FUNCTION(7, "DBG1_OUT5")
	),
	MTK_PIN(
		PINCTRL_PIN(9, "GPIO9"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO9"),
		MTK_FUNCTION(1, "NFI0"),
		MTK_FUNCTION(2, "SPI3_CS"),
		MTK_FUNCTION(3, "USB_IDDIG"),
		MTK_FUNCTION(4, "URXD2"),
		MTK_FUNCTION(5, "MD_EINT0"),
		MTK_FUNCTION(6, "EINT9"),
		MTK_FUNCTION(7, "CONN_MCU_TMS")
	),
	MTK_PIN(
		PINCTRL_PIN(10, "GPIO10"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO10"),
		MTK_FUNCTION(1, "NFI1"),
		MTK_FUNCTION(2, "SPI3_SCK"),
		MTK_FUNCTION(3, "USB_DRVVBUS"),
		MTK_FUNCTION(4, "UTXD2"),
		MTK_FUNCTION(5, "PWM_C"),
		MTK_FUNCTION(6, "EINT10"),
		MTK_FUNCTION(7, "CONN_MCU_TRST_B")
	),
	MTK_PIN(
		PINCTRL_PIN(11, "GPIO11"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO11"),
		MTK_FUNCTION(1, "NFI2"),
		MTK_FUNCTION(2, "SPI3_MOSI"),
		MTK_FUNCTION(4, "URXD1"),
		MTK_FUNCTION(5, "MD_URXD3"),
		MTK_FUNCTION(6, "EINT11"),
		MTK_FUNCTION(7, "CONN_MCU_TDI")
	),
	MTK_PIN(
		PINCTRL_PIN(12, "GPIO12"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO12"),
		MTK_FUNCTION(1, "NFI3"),
		MTK_FUNCTION(2, "SPI3_MISO"),
		MTK_FUNCTION(3, "I2S0_WS"),
		MTK_FUNCTION(4, "UTXD1"),
		MTK_FUNCTION(5, "MD_UTXD3"),
		MTK_FUNCTION(6, "EINT12"),
		MTK_FUNCTION(7, "CONN_MCU_TCK")
	),
	MTK_PIN(
		PINCTRL_PIN(13, "GPIO13"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO13"),
		MTK_FUNCTION(1, "PMIC_EINT"),
		MTK_FUNCTION(6, "EINT13")
	),
	MTK_PIN(
		PINCTRL_PIN(14, "GPIO14"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO14"),
		MTK_FUNCTION(1, "NFI4"),
		MTK_FUNCTION(2, "I2S0_BCK"),
		MTK_FUNCTION(3, "MD_EINT1"),
		MTK_FUNCTION(4, "URTS1"),
		MTK_FUNCTION(5, "ANT_SEL0"),
		MTK_FUNCTION(6, "EINT14"),
		MTK_FUNCTION(7, "CONN_MCU_DBGI_N")
	),
	MTK_PIN(
		PINCTRL_PIN(15, "GPIO15"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO15"),
		MTK_FUNCTION(1, "NFI5"),
		MTK_FUNCTION(2, "I2S0_DI"),
		MTK_FUNCTION(3, "MD_EINT2"),
		MTK_FUNCTION(4, "UCTS1"),
		MTK_FUNCTION(5, "ANT_SEL1"),
		MTK_FUNCTION(6, "EINT15"),
		MTK_FUNCTION(7, "CONN_MCU_DBGACK_N")
	),
	MTK_PIN(
		PINCTRL_PIN(16, "GPIO16"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO16"),
		MTK_FUNCTION(1, "NFI6"),
		MTK_FUNCTION(2, "I2S1_WS"),
		MTK_FUNCTION(3, "SIM1_SIO"),
		MTK_FUNCTION(4, "I2C_SCL2"),
		MTK_FUNCTION(5, "ANT_SEL2"),
		MTK_FUNCTION(6, "EINT0"),
		MTK_FUNCTION(7, "CONN_MCU_TDO")
	),
	MTK_PIN(
		PINCTRL_PIN(17, "GPIO17"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO17"),
		MTK_FUNCTION(1, "NFI7"),
		MTK_FUNCTION(2, "I2S1_BCK"),
		MTK_FUNCTION(3, "SIM1_SCLK"),
		MTK_FUNCTION(4, "I2C_SDA2"),
		MTK_FUNCTION(6, "EINT1")
	),
	MTK_PIN(
		PINCTRL_PIN(18, "GPIO18"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO18"),
		MTK_FUNCTION(1, "NFI8"),
		MTK_FUNCTION(2, "I2S1_DO"),
		MTK_FUNCTION(3, "I2C_SCL1"),
		MTK_FUNCTION(4, "JTCK"),
		MTK_FUNCTION(6, "EINT2")
	),
	MTK_PIN(
		PINCTRL_PIN(19, "GPIO19"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO19"),
		MTK_FUNCTION(1, "NFI9"),
		MTK_FUNCTION(2, "I2S2_WS"),
		MTK_FUNCTION(3, "I2C_SDA1"),
		MTK_FUNCTION(4, "JTDO"),
		MTK_FUNCTION(5, "CMCSK"),
		MTK_FUNCTION(6, "EINT3")
	),
	MTK_PIN(
		PINCTRL_PIN(20, "GPIO20"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO20"),
		MTK_FUNCTION(1, "NFI10"),
		MTK_FUNCTION(2, "I2S2_BCK"),
		MTK_FUNCTION(3, "SIM2_SIO"),
		MTK_FUNCTION(4, "JTMS"),
		MTK_FUNCTION(5, "CMCSD0"),
		MTK_FUNCTION(6, "EINT4")
	),
	MTK_PIN(
		PINCTRL_PIN(21, "GPIO21"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO21"),
		MTK_FUNCTION(1, "NFI11"),
		MTK_FUNCTION(2, "I2S2_DI"),
		MTK_FUNCTION(3, "SIM2_SCLK"),
		MTK_FUNCTION(4, "JTDI"),
		MTK_FUNCTION(5, "CMCSD1"),
		MTK_FUNCTION(6, "EINT5")
	),
	MTK_PIN(
		PINCTRL_PIN(22, "GPIO22"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO22"),
		MTK_FUNCTION(1, "SIM1_SCLK"),
		MTK_FUNCTION(2, "SIM2_SCLK"),
		MTK_FUNCTION(6, "EINT6")
	),
	MTK_PIN(
		PINCTRL_PIN(23, "GPIO23"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO23"),
		MTK_FUNCTION(1, "SIM1_SIO"),
		MTK_FUNCTION(2, "SIM2_SIO"),
		MTK_FUNCTION(6, "EINT7")
	),
	MTK_PIN(
		PINCTRL_PIN(24, "GPIO24"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO24"),
		MTK_FUNCTION(1, "SIM2_SIO"),
		MTK_FUNCTION(2, "SIM1_SIO"),
		MTK_FUNCTION(3, "I2C_SDA1"),
		MTK_FUNCTION(4, "TEST_26M_IN"),
		MTK_FUNCTION(5, "USB_IDDIG"),
		MTK_FUNCTION(6, "EINT8"),
		MTK_FUNCTION(7, "DBG1_OUT6")
	),
	MTK_PIN(
		PINCTRL_PIN(25, "GPIO25"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO25"),
		MTK_FUNCTION(1, "SIM2_SCLK"),
		MTK_FUNCTION(2, "SIM1_SCLK"),
		MTK_FUNCTION(3, "I2C_SCL1"),
		MTK_FUNCTION(4, "CONN_MCU_TDO"),
		MTK_FUNCTION(5, "USB_DRVVBUS"),
		MTK_FUNCTION(6, "EINT9"),
		MTK_FUNCTION(7, "DBG1_OUT7")
	),
	MTK_PIN(
		PINCTRL_PIN(26, "GPIO26"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO26"),
		MTK_FUNCTION(1, "AUD_CLK_MOSI"),
		MTK_FUNCTION(6, "EINT10"),
		MTK_FUNCTION(7, "DBG1_OUT8")
	),
	MTK_PIN(
		PINCTRL_PIN(27, "GPIO27"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO27"),
		MTK_FUNCTION(1, "AUD_DAT_MOSI"),
		MTK_FUNCTION(2, "AUD_DAT_MISO"),
		MTK_FUNCTION(6, "EINT11"),
		MTK_FUNCTION(7, "DBG1_OUT9")
	),
	MTK_PIN(
		PINCTRL_PIN(28, "GPIO28"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO28"),
		MTK_FUNCTION(1, "AUD_DAT_MISO"),
		MTK_FUNCTION(2, "AUD_DAT_MOSI"),
		MTK_FUNCTION(6, "EINT12"),
		MTK_FUNCTION(7, "DBG1_OUT10")
	),
	MTK_PIN(
		PINCTRL_PIN(29, "GPIO29"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO29"),
		MTK_FUNCTION(1, "PMIC_SPI_CSN"),
		MTK_FUNCTION(6, "EINT13")
	),
	MTK_PIN(
		PINCTRL_PIN(30, "GPIO30"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO30"),
		MTK_FUNCTION(1, "PMIC_SPI_SCK"),
		MTK_FUNCTION(6, "EINT14")
	),
	MTK_PIN(
		PINCTRL_PIN(31, "GPIO31"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO31"),
		MTK_FUNCTION(1, "PMIC_SPI_MOSI"),
		MTK_FUNCTION(2, "PMIC_SPI_MISO"),
		MTK_FUNCTION(6, "EINT15")
	),
	MTK_PIN(
		PINCTRL_PIN(32, "GPIO32"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO32"),
		MTK_FUNCTION(1, "PMIC_SPI_MISO"),
		MTK_FUNCTION(2, "PMIC_SPI_MOSI"),
		MTK_FUNCTION(6, "EINT0")
	),
	MTK_PIN(
		PINCTRL_PIN(33, "GPIO33"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO33"),
		MTK_FUNCTION(1, "WATCHDOG"),
		MTK_FUNCTION(6, "EINT1")
	),
	MTK_PIN(
		PINCTRL_PIN(34, "GPIO34"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO34"),
		MTK_FUNCTION(1, "SRCLKENAI"),
		MTK_FUNCTION(6, "EINT2")
	),
	MTK_PIN(
		PINCTRL_PIN(35, "GPIO35"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPI35"),
		MTK_FUNCTION(1, "PAD_RDP0_A"),
		MTK_FUNCTION(2, "CMCSK"),
		MTK_FUNCTION(6, "EINT3")
	),
	MTK_PIN(
		PINCTRL_PIN(36, "GPIO36"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPI36"),
		MTK_FUNCTION(1, "PAD_RDN0_A"),
		MTK_FUNCTION(2, "CMCSD0"),
		MTK_FUNCTION(6, "EINT4")
	),
	MTK_PIN(
		PINCTRL_PIN(37, "GPIO37"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPI37"),
		MTK_FUNCTION(1, "PAD_RDP1_A"),
		MTK_FUNCTION(2, "CMCSD1"),
		MTK_FUNCTION(6, "EINT5")
	),
	MTK_PIN(
		PINCTRL_PIN(38, "GPIO38"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPI38"),
		MTK_FUNCTION(1, "PAD_RDN1_A"),
		MTK_FUNCTION(2, "CMCSD2"),
		MTK_FUNCTION(6, "EINT6")
	),
	MTK_PIN(
		PINCTRL_PIN(39, "GPIO39"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPI39"),
		MTK_FUNCTION(1, "PAD_RCP_A"),
		MTK_FUNCTION(2, "CMCSD3"),
		MTK_FUNCTION(6, "EINT7")
	),
	MTK_PIN(
		PINCTRL_PIN(40, "GPIO40"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPI40"),
		MTK_FUNCTION(1, "PAD_RCN_A"),
		MTK_FUNCTION(6, "EINT8")
	),
	MTK_PIN(
		PINCTRL_PIN(41, "GPIO41"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO41"),
		MTK_FUNCTION(1, "MC0_CK"),
		MTK_FUNCTION(4, "NFI12"),
		MTK_FUNCTION(6, "EINT9")
	),
	MTK_PIN(
		PINCTRL_PIN(42, "GPIO42"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO42"),
		MTK_FUNCTION(1, "MC0_CMD"),
		MTK_FUNCTION(4, "NFI13"),
		MTK_FUNCTION(6, "EINT10")
	),
	MTK_PIN(
		PINCTRL_PIN(43, "GPIO43"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO43"),
		MTK_FUNCTION(1, "MC0_DAT0"),
		MTK_FUNCTION(4, "NFI14"),
		MTK_FUNCTION(6, "EINT11")
	),
	MTK_PIN(
		PINCTRL_PIN(44, "GPIO44"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO44"),
		MTK_FUNCTION(1, "MC0_DAT1"),
		MTK_FUNCTION(4, "NFI15"),
		MTK_FUNCTION(6, "EINT12")
	),
	MTK_PIN(
		PINCTRL_PIN(45, "GPIO45"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO45"),
		MTK_FUNCTION(1, "MC0_DAT2"),
		MTK_FUNCTION(4, "NFI16"),
		MTK_FUNCTION(6, "EINT13")
	),
	MTK_PIN(
		PINCTRL_PIN(46, "GPIO46"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO46"),
		MTK_FUNCTION(1, "MC0_DAT3"),
		MTK_FUNCTION(4, "NFI17"),
		MTK_FUNCTION(6, "EINT14")
	),
	MTK_PIN(
		PINCTRL_PIN(47, "GPIO47"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO47"),
		MTK_FUNCTION(1, "MC0_DAT4"),
		MTK_FUNCTION(4, "NFI18"),
		MTK_FUNCTION(6, "EINT15")
	),
	MTK_PIN(
		PINCTRL_PIN(48, "GPIO48"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO48"),
		MTK_FUNCTION(1, "MC0_DAT5"),
		MTK_FUNCTION(4, "NFI19"),
		MTK_FUNCTION(6, "EINT0")
	),
	MTK_PIN(
		PINCTRL_PIN(49, "GPIO49"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO49"),
		MTK_FUNCTION(1, "MC0_DAT6"),
		MTK_FUNCTION(4, "NFI20"),
		MTK_FUNCTION(6, "EINT1")
	),
	MTK_PIN(
		PINCTRL_PIN(50, "GPIO50"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO50"),
		MTK_FUNCTION(1, "MC0_DAT7"),
		MTK_FUNCTION(4, "NFI21"),
		MTK_FUNCTION(6, "EINT2")
	),
	MTK_PIN(
		PINCTRL_PIN(51, "GPIO51"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO51"),
		MTK_FUNCTION(1, "MC0_RSTB"),
		MTK_FUNCTION(4, "NFI22"),
		MTK_FUNCTION(6, "EINT3")
	),
	MTK_PIN(
		PINCTRL_PIN(52, "GPIO52"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO52"),
		MTK_FUNCTION(1, "MSDC1_CLK"),
		MTK_FUNCTION(2, "CONN_MCU_TDI"),
		MTK_FUNCTION(3, "EINT3"),
		MTK_FUNCTION(4, "JTMS"),
		MTK_FUNCTION(5, "CONN_FM_TDI"),
		MTK_FUNCTION(6, "I2S1_BCK"),
		MTK_FUNCTION(7, "CONN_DSP_JDI")
	),
	MTK_PIN(
		PINCTRL_PIN(53, "GPIO53"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO53"),
		MTK_FUNCTION(1, "MSDC1_CMD"),
		MTK_FUNCTION(2, "CONN_MCU_TDO"),
		MTK_FUNCTION(3, "EINT4"),
		MTK_FUNCTION(4, "CONN_MCU_AICE_TCKC"),
		MTK_FUNCTION(5, "CONN_FM_TDO"),
		MTK_FUNCTION(6, "I2S1_WS"),
		MTK_FUNCTION(7, "CONN_DSP_JDO")
	),
	MTK_PIN(
		PINCTRL_PIN(54, "GPIO54"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO54"),
		MTK_FUNCTION(1, "MSDC1_DAT3"),
		MTK_FUNCTION(2, "CONN_MCU_TMS"),
		MTK_FUNCTION(3, "EINT5"),
		MTK_FUNCTION(4, "JTDO"),
		MTK_FUNCTION(5, "CONN_FM_TMS"),
		MTK_FUNCTION(6, "I2S1_DO"),
		MTK_FUNCTION(7, "CONN_DSP_JMS")
	),
	MTK_PIN(
		PINCTRL_PIN(55, "GPIO55"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO55"),
		MTK_FUNCTION(1, "MSDC1_DAT2"),
		MTK_FUNCTION(2, "CONN_MCU_TRST_B"),
		MTK_FUNCTION(3, "EINT6"),
		MTK_FUNCTION(4, "JTDI"),
		MTK_FUNCTION(5, "CONN_FM_TRST"),
		MTK_FUNCTION(6, "I2S2_WS"),
		MTK_FUNCTION(7, "CONN_DSP_JINTP")
	),
	MTK_PIN(
		PINCTRL_PIN(56, "GPIO56"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO56"),
		MTK_FUNCTION(1, "MSDC1_DAT1"),
		MTK_FUNCTION(2, "CONN_MCU_TCK"),
		MTK_FUNCTION(3, "EINT7"),
		MTK_FUNCTION(6, "I2S2_BCK")
	),
	MTK_PIN(
		PINCTRL_PIN(57, "GPIO57"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO57"),
		MTK_FUNCTION(1, "MSDC1_DAT0"),
		MTK_FUNCTION(2, "CONN_MCU_DBGI_N"),
		MTK_FUNCTION(3, "EINT8"),
		MTK_FUNCTION(4, "JTCK"),
		MTK_FUNCTION(5, "CONN_FM_TCK"),
		MTK_FUNCTION(6, "I2S2_DI"),
		MTK_FUNCTION(7, "CONN_DSP_JCK")
	),
	MTK_PIN(
		PINCTRL_PIN(58, "GPIO58"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO58"),
		MTK_FUNCTION(1, "I2C_SCL0"),
		MTK_FUNCTION(6, "EINT10")
	),
	MTK_PIN(
		PINCTRL_PIN(59, "GPIO59"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO59"),
		MTK_FUNCTION(1, "I2C_SCL1"),
		MTK_FUNCTION(6, "EINT11")
	),
	MTK_PIN(
		PINCTRL_PIN(60, "GPIO60"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO60"),
		MTK_FUNCTION(1, "I2C_SCL2"),
		MTK_FUNCTION(6, "EINT12")
	),
	MTK_PIN(
		PINCTRL_PIN(61, "GPIO61"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO61"),
		MTK_FUNCTION(1, "I2C_SDA0"),
		MTK_FUNCTION(6, "EINT13")
	),
	MTK_PIN(
		PINCTRL_PIN(62, "GPIO62"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO62"),
		MTK_FUNCTION(1, "I2C_SDA1"),
		MTK_FUNCTION(6, "EINT14")
	),
	MTK_PIN(
		PINCTRL_PIN(63, "GPIO63"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO63"),
		MTK_FUNCTION(1, "I2C_SDA2"),
		MTK_FUNCTION(6, "EINT15")
	),
	MTK_PIN(
		PINCTRL_PIN(64, "GPIO64"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO64"),
		MTK_FUNCTION(1, "KPCOL0"),
		MTK_FUNCTION(6, "EINT0"),
		MTK_FUNCTION(7, "DBG2_OUT14")
	),
	MTK_PIN(
		PINCTRL_PIN(65, "GPIO65"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO65"),
		MTK_FUNCTION(1, "KPROW1"),
		MTK_FUNCTION(2, "URTS1"),
		MTK_FUNCTION(5, "MD_UTXD3"),
		MTK_FUNCTION(6, "EINT1"),
		MTK_FUNCTION(7, "DBG1_OUT11")
	),
	MTK_PIN(
		PINCTRL_PIN(66, "GPIO66"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO66"),
		MTK_FUNCTION(1, "DISP_PWM"),
		MTK_FUNCTION(6, "EINT2"),
		MTK_FUNCTION(7, "DBG1_OUT12")
	),
	MTK_PIN(
		PINCTRL_PIN(67, "GPIO67"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO67"),
		MTK_FUNCTION(1, "KPCOL1"),
		MTK_FUNCTION(2, "UCTS1"),
		MTK_FUNCTION(3, "PWM_D"),
		MTK_FUNCTION(5, "MD_URXD3"),
		MTK_FUNCTION(6, "EINT3"),
		MTK_FUNCTION(7, "DBG1_OUT13")
	),
	MTK_PIN(
		PINCTRL_PIN(68, "GPIO68"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO68"),
		MTK_FUNCTION(1, "DSI_TE"),
		MTK_FUNCTION(6, "EINT16"),
		MTK_FUNCTION(7, "DBG1_OUT14")
	),
	MTK_PIN(
		PINCTRL_PIN(69, "GPIO69"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO69"),
		MTK_FUNCTION(1, "KPROW0"),
		MTK_FUNCTION(2, "CONN_MCU_DBGACK_N"),
		MTK_FUNCTION(3, "MD_EINT0"),
		MTK_FUNCTION(6, "EINT4"),
		MTK_FUNCTION(7, "DBG1_OUT15")
	),
	MTK_PIN(
		PINCTRL_PIN(70, "GPIO70"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO70"),
		MTK_FUNCTION(1, "LCM_RST"),
		MTK_FUNCTION(6, "EINT5"),
		MTK_FUNCTION(7, "DBG2_OUT15")
	),
	MTK_PIN(
		PINCTRL_PIN(71, "GPIO71"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO71"),
		MTK_FUNCTION(2, "CONN_MCU_TDI"),
		MTK_FUNCTION(3, "CONN_DSP_JDO"),
		MTK_FUNCTION(4, "CONN_FM_TDO"),
		MTK_FUNCTION(5, "JTMS"),
		MTK_FUNCTION(6, "EINT6"),
		MTK_FUNCTION(7, "ANT_SEL0")
	),
	MTK_PIN(
		PINCTRL_PIN(72, "GPIO72"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO72"),
		MTK_FUNCTION(1, "CAM_CLK0"),
		MTK_FUNCTION(2, "CONN_MCU_DBGACK_N"),
		MTK_FUNCTION(3, "CONN_DSP_JCK"),
		MTK_FUNCTION(4, "CONN_FM_TCK"),
		MTK_FUNCTION(6, "EINT7"),
		MTK_FUNCTION(7, "ANT_SEL1")
	),
	MTK_PIN(
		PINCTRL_PIN(73, "GPIO73"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO73"),
		MTK_FUNCTION(2, "CONN_MCU_TMS"),
		MTK_FUNCTION(3, "CONN_DSP_JDI"),
		MTK_FUNCTION(4, "CONN_FM_TDI"),
		MTK_FUNCTION(5, "CONN_MCU_AICE_TMSC"),
		MTK_FUNCTION(6, "EINT8"),
		MTK_FUNCTION(7, "ANT_SEL2")
	),
	MTK_PIN(
		PINCTRL_PIN(74, "GPIO74"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO74"),
		MTK_FUNCTION(2, "CONN_MCU_TRST_B"),
		MTK_FUNCTION(3, "CONN_DSP_JINTP"),
		MTK_FUNCTION(4, "CONN_FM_TRST"),
		MTK_FUNCTION(5, "JTDO"),
		MTK_FUNCTION(6, "I2S0_WS"),
		MTK_FUNCTION(7, "EINT9")
	),
	MTK_PIN(
		PINCTRL_PIN(75, "GPIO75"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO75"),
		MTK_FUNCTION(1, "CAM_CLK1"),
		MTK_FUNCTION(2, "CONN_MCU_TCK"),
		MTK_FUNCTION(3, "CONN_MCU_AICE_TCKC"),
		MTK_FUNCTION(4, "JTDI"),
		MTK_FUNCTION(5, "PWM_E"),
		MTK_FUNCTION(6, "I2S0_BCK"),
		MTK_FUNCTION(7, "EINT10")
	),
	MTK_PIN(
		PINCTRL_PIN(76, "GPIO76"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO76"),
		MTK_FUNCTION(2, "CONN_MCU_DBGI_N"),
		MTK_FUNCTION(3, "CONN_DSP_JMS"),
		MTK_FUNCTION(4, "CONN_FM_TMS"),
		MTK_FUNCTION(5, "JTCK"),
		MTK_FUNCTION(6, "I2S0_DI"),
		MTK_FUNCTION(7, "EINT11")
	),
	MTK_PIN(
		PINCTRL_PIN(77, "GPIO77"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO77"),
		MTK_FUNCTION(1, "URXD1"),
		MTK_FUNCTION(2, "USB_IDDIG"),
		MTK_FUNCTION(3, "URXD2"),
		MTK_FUNCTION(4, "MD_EINT1"),
		MTK_FUNCTION(5, "MD_URXD3"),
		MTK_FUNCTION(6, "EINT12"),
		MTK_FUNCTION(7, "CONN_MCU_AICE_TCKC")
	),
	MTK_PIN(
		PINCTRL_PIN(78, "GPIO78"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO78"),
		MTK_FUNCTION(1, "UTXD1"),
		MTK_FUNCTION(2, "USB_DRVVBUS"),
		MTK_FUNCTION(3, "UTXD2"),
		MTK_FUNCTION(4, "MD_EINT2"),
		MTK_FUNCTION(5, "MD_UTXD3"),
		MTK_FUNCTION(6, "EINT13"),
		MTK_FUNCTION(7, "CONN_MCU_AICE_TMSC")
	),
	MTK_PIN(
		PINCTRL_PIN(79, "GPIO79"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO79"),
		MTK_FUNCTION(1, "VM1"),
		MTK_FUNCTION(6, "EINT14"),
		MTK_FUNCTION(7, "DBG2_OUT0")
	),
	MTK_PIN(
		PINCTRL_PIN(80, "GPIO80"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO80"),
		MTK_FUNCTION(1, "VM0"),
		MTK_FUNCTION(6, "EINT15"),
		MTK_FUNCTION(7, "DBG2_OUT1")
	),
	MTK_PIN(
		PINCTRL_PIN(81, "GPIO81"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO81"),
		MTK_FUNCTION(1, "BPI_BUS11"),
		MTK_FUNCTION(6, "EINT0"),
		MTK_FUNCTION(7, "DBG2_OUT2")
	),
	MTK_PIN(
		PINCTRL_PIN(82, "GPIO82"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO82"),
		MTK_FUNCTION(1, "BPI_BUS10"),
		MTK_FUNCTION(6, "EINT1"),
		MTK_FUNCTION(7, "DBG2_OUT3")
	),
	MTK_PIN(
		PINCTRL_PIN(83, "GPIO83"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO83"),
		MTK_FUNCTION(1, "BPI_BUS9"),
		MTK_FUNCTION(6, "EINT2"),
		MTK_FUNCTION(7, "DBG2_OUT4")
	),
	MTK_PIN(
		PINCTRL_PIN(84, "GPIO84"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO84"),
		MTK_FUNCTION(1, "BPI_BUS8"),
		MTK_FUNCTION(6, "EINT3"),
		MTK_FUNCTION(7, "DBG2_OUT5")
	),
	MTK_PIN(
		PINCTRL_PIN(85, "GPIO85"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO85"),
		MTK_FUNCTION(1, "BPI_BUS7"),
		MTK_FUNCTION(6, "EINT4"),
		MTK_FUNCTION(7, "DBG2_OUT6")
	),
	MTK_PIN(
		PINCTRL_PIN(86, "GPIO86"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO86"),
		MTK_FUNCTION(1, "BPI_BUS6"),
		MTK_FUNCTION(6, "EINT5"),
		MTK_FUNCTION(7, "DBG2_OUT7")
	),
	MTK_PIN(
		PINCTRL_PIN(87, "GPIO87"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO87"),
		MTK_FUNCTION(1, "BPI_BUS5"),
		MTK_FUNCTION(2, "MIPI_DAT"),
		MTK_FUNCTION(6, "EINT6"),
		MTK_FUNCTION(7, "DBG2_OUT8")
	),
	MTK_PIN(
		PINCTRL_PIN(88, "GPIO88"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO88"),
		MTK_FUNCTION(1, "BPI_BUS4"),
		MTK_FUNCTION(2, "MIPI_CLK"),
		MTK_FUNCTION(6, "EINT7"),
		MTK_FUNCTION(7, "DBG2_OUT9")
	),
	MTK_PIN(
		PINCTRL_PIN(89, "GPIO89"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO89"),
		MTK_FUNCTION(1, "BPI_BUS3"),
		MTK_FUNCTION(6, "EINT8"),
		MTK_FUNCTION(7, "DBG2_OUT10")
	),
	MTK_PIN(
		PINCTRL_PIN(90, "GPIO90"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO90"),
		MTK_FUNCTION(1, "BPI_BUS2"),
		MTK_FUNCTION(6, "EINT9"),
		MTK_FUNCTION(7, "DBG2_OUT11")
	),
	MTK_PIN(
		PINCTRL_PIN(91, "GPIO91"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO91"),
		MTK_FUNCTION(1, "BPI_BUS1"),
		MTK_FUNCTION(6, "EINT10"),
		MTK_FUNCTION(7, "DBG2_OUT12")
	),
	MTK_PIN(
		PINCTRL_PIN(92, "GPIO92"),
		NULL, "mt6580",
		MTK_EINT_FUNCTION(NO_EINT_SUPPORT, NO_EINT_SUPPORT),
		MTK_FUNCTION(0, "GPIO92"),
		MTK_FUNCTION(1, "BPI_BUS0"),
		MTK_FUNCTION(6, "EINT11"),
		MTK_FUNCTION(7, "DBG2_OUT13")
	),
};

#endif /* __PINCTRL_MTK_MT6580_H */