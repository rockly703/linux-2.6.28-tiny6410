/* linux/arch/arm/plat-s5pc1xx/include/plat/gpio-bank-g1.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 * 	Ben Dooks <ben@simtec.co.uk>
 * 	http://armlinux.simtec.co.uk/
 *
 * GPIO Bank G1 register and configuration definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#define S5PC1XX_GPG1CON			(S5PC1XX_GPG1_BASE + 0x00)
#define S5PC1XX_GPG1DAT			(S5PC1XX_GPG1_BASE + 0x04)
#define S5PC1XX_GPG1PUD			(S5PC1XX_GPG1_BASE + 0x08)
#define S5PC1XX_GPG1DRV			(S5PC1XX_GPG1_BASE + 0x0c)
#define S5PC1XX_GPG1CONPDN		(S5PC1XX_GPG1_BASE + 0x10)
#define S5PC1XX_GPG1PUDPDN		(S5PC1XX_GPG1_BASE + 0x14)

#define S5PC1XX_GPG1_CONMASK(__gpio)	(0xf << ((__gpio) * 4))
#define S5PC1XX_GPG1_INPUT(__gpio)	(0x0 << ((__gpio) * 4))
#define S5PC1XX_GPG1_OUTPUT(__gpio)	(0x1 << ((__gpio) * 4))

#define S5PC1XX_GPG1_0_SD_0_DATA_6	(0x2 << 0)
#define S5PC1XX_GPG1_0_GPIO_INT12_0	(0xf << 0)

#define S5PC1XX_GPG1_1_SD_0_DATA_7	(0x2 << 4)
#define S5PC1XX_GPG1_1_GPIO_INT12_1	(0xf << 4)

#define S5PC1XX_GPG1_2_SD_0_CDn		(0x2 << 8)
#define S5PC1XX_GPG1_2_GPIO_INT12_2	(0xf << 8)

