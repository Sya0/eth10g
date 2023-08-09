////////////////////////////////////////////////////////////////////////////////
//
// Filename:	./regdefs.h
// {{{
// Project:	10Gb Ethernet switch
//
// DO NOT EDIT THIS FILE!
// Computer Generated: This file is computer generated by AUTOFPGA. DO NOT EDIT.
// DO NOT EDIT THIS FILE!
//
// CmdLine:	autofpga -I .: -d -o . allclocks.txt siclk.txt sirefclk.txt global.txt wbdown.txt icape.txt version.txt gpio.txt spio.txt wbuconsole.txt zipmaster.txt bkram.txt sdio.txt emmc.txt netrouter.txt cpunet.txt hdmi.txt cec.txt edid.txt emmcscope.txt netscope.txt i2cscope.txt rxedidscope.txt mem_bkram_only.txt mem_flash_bkram.txt i2ccpu.txt fan.txt netclk.txt sirefclkcounter.txt
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
// }}}
// Copyright (C) 2023, Gisselquist Technology, LLC
// {{{
// This file is part of the ETH10G project.
//
// The ETH10G project contains free software and gateware, licensed under the
// Apache License, Version 2.0 (the "License").  You may not use this project,
// or this file, except in compliance with the License.  You may obtain a copy
// of the License at
// }}}
//	http://www.apache.org/licenses/LICENSE-2.0
// {{{
// Unless required by applicable law or agreed to in writing, files
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
// License for the specific language governing permissions and limitations
// under the License.
//
////////////////////////////////////////////////////////////////////////////////
//
// }}}
#ifndef	REGDEFS_H
#define	REGDEFS_H


//
// The @REGDEFS.H.INCLUDE tag
//
// @REGDEFS.H.INCLUDE for masters
// @REGDEFS.H.INCLUDE for peripherals
// And finally any master REGDEFS.H.INCLUDE tags
// End of definitions from REGDEFS.H.INCLUDE


//
// Register address definitions, from @REGS.#d
//
// emmcscope compressed scope
#define	R_EMMCSCOPE     	0x00040000	// 00040000, wbregs names: EMMCSCOPE
#define	R_EMMCSCOPED    	0x00040004	// 00040000, wbregs names: EMMCSCOPED
// i2cscope compressed scope
#define	R_I2CSCOPE      	0x00040100	// 00040100, wbregs names: I2CSCOPE
#define	R_I2CSCOPED     	0x00040104	// 00040100, wbregs names: I2CSCOPED
// netscope compressed scope
#define	R_NETSCOPE      	0x00040200	// 00040200, wbregs names: NETSCOPE
#define	R_NETSCOPED     	0x00040204	// 00040200, wbregs names: NETSCOPED
// rxedidscope compressed scope
#define	R_RXEDIDSCOPE   	0x00040300	// 00040300, wbregs names: RXEDIDSCOPE
#define	R_RXEDIDSCOPED  	0x00040304	// 00040300, wbregs names: RXEDIDSCOPED
// CONSOLE registers
#define	R_CONSOLE_FIFO  	0x00040404	// 00040400, wbregs names: UFIFO
#define	R_CONSOLE_UARTRX	0x00040408	// 00040400, wbregs names: RX
#define	R_CONSOLE_UARTTX	0x0004040c	// 00040400, wbregs names: TX
// CPU Net Controller registers
#define	R_CPUNETRX_BASE 	0x00040500	// 00040500, wbregs names: CPUNETRXBASE
#define	R_CPUNETRX_LEN  	0x00040504	// 00040500, wbregs names: CPUNETRXLEN
#define	R_CPUNETRX_RPTR 	0x00040508	// 00040500, wbregs names: CPUNETRXRPTR
#define	R_CPUNETRX_WPTR 	0x0004050c	// 00040500, wbregs names: CPUNETRXWPTR
#define	R_CPUNETTX_BASE 	0x00040510	// 00040500, wbregs names: CPUNETTXBASE
#define	R_CPUNETTX_LEN  	0x00040514	// 00040500, wbregs names: CPUNETTXLEN
#define	R_CPUNETTX_RPTR 	0x00040518	// 00040500, wbregs names: CPUNETTXRPTR
#define	R_CPUNETTX_WPTR 	0x0004051c	// 00040500, wbregs names: CPUNETTXWPTR
// eMMC Card addresses
#define	R_EMMC_CTRL     	0x00040600	// 00040600, wbregs names: EMMCCARD
#define	R_EMMC_DATA     	0x00040604	// 00040600, wbregs names: EMMCDATA
#define	R_EMMC_FIFOA    	0x00040608	// 00040600, wbregs names: EMMCFIFOA, EMMCFIF0, EMMCFIFA
#define	R_EMMC_FIFOB    	0x0004060c	// 00040600, wbregs names: EMMCFIFOB, EMMCFIF1, EMMCFIFB
#define	R_EMMC_PHY      	0x00040610	// 00040600, wbregs names: EMMCPHY
#define	R_FAN_FPGAPWM   	0x00040700	// 00040700, wbregs names: FAN_FPGAPWM
#define	R_FAN_SYSPWM    	0x00040704	// 00040700, wbregs names: FAN_SYSPWM
#define	R_FAN_TACH      	0x00040708	// 00040700, wbregs names: FAN_TACH
#define	R_FAN_TEMP      	0x0004070c	// 00040700, wbregs names: FAN_TEMP
#define	R_FAN           	0x00040710	// 00040700, wbregs names: FAN_CTRL
#define	R_FAN_OVW       	0x00040714	// 00040700, wbregs names: FAN_OVW, FAN_OVERRIDE
#define	R_FAN_ADDR      	0x00040718	// 00040700, wbregs names: FAN_ADDR, FAN_ADDRESS
#define	R_FAN_CKCOUNT   	0x0004071c	// 00040700, wbregs names: FANCLK, FAN_CKCOUNT
// SDIO SD Card addresses
#define	R_SDIO_CTRL     	0x00040800	// 00040800, wbregs names: SDCARD
#define	R_SDIO_DATA     	0x00040804	// 00040800, wbregs names: SDDATA
#define	R_SDIO_FIFOA    	0x00040808	// 00040800, wbregs names: SDFIFOA, SDFIF0, SDFIFA
#define	R_SDIO_FIFOB    	0x0004080c	// 00040800, wbregs names: SDFIFOB, SDFIF1, SDFIFB
#define	R_SDIO_PHY      	0x00040810	// 00040800, wbregs names: SDPHY
// FPGA CONFIG REGISTERS: 0x4e0-0x4ff
#define	R_CFG_CRC       	0x00040a00	// 00040a00, wbregs names: FPGACRC
#define	R_CFG_FAR       	0x00040a04	// 00040a00, wbregs names: FPGAFAR
#define	R_CFG_FDRI      	0x00040a08	// 00040a00, wbregs names: FPGAFDRI
#define	R_CFG_FDRO      	0x00040a0c	// 00040a00, wbregs names: FPGAFDRO
#define	R_CFG_CMD       	0x00040a10	// 00040a00, wbregs names: FPGACMD
#define	R_CFG_CTL0      	0x00040a14	// 00040a00, wbregs names: FPGACTL0
#define	R_CFG_MASK      	0x00040a18	// 00040a00, wbregs names: FPGAMASK
#define	R_CFG_STAT      	0x00040a1c	// 00040a00, wbregs names: FPGASTAT
#define	R_CFG_LOUT      	0x00040a20	// 00040a00, wbregs names: FPGALOUT
#define	R_CFG_COR0      	0x00040a24	// 00040a00, wbregs names: FPGACOR0
#define	R_CFG_MFWR      	0x00040a28	// 00040a00, wbregs names: FPGAMFWR
#define	R_CFG_CBC       	0x00040a2c	// 00040a00, wbregs names: FPGACBC
#define	R_CFG_IDCODE    	0x00040a30	// 00040a00, wbregs names: FPGAIDCODE
#define	R_CFG_AXSS      	0x00040a34	// 00040a00, wbregs names: FPGAAXSS
#define	R_CFG_COR1      	0x00040a38	// 00040a00, wbregs names: FPGACOR1
#define	R_CFG_WBSTAR    	0x00040a40	// 00040a00, wbregs names: WBSTAR
#define	R_CFG_TIMER     	0x00040a44	// 00040a00, wbregs names: CFGTIMER
#define	R_CFG_BOOTSTS   	0x00040a58	// 00040a00, wbregs names: BOOTSTS
#define	R_CFG_CTL1      	0x00040a60	// 00040a00, wbregs names: FPGACTL1
#define	R_CFG_BSPI      	0x00040a7c	// 00040a00, wbregs names: FPGABSPI
// I2C Controller registers
#define	R_I2CCPU        	0x00040c00	// 00040c00, wbregs names: I2CCPU, I2CCPU_CTRL, I2CCPUCTRL
#define	R_I2CCPU_OVW    	0x00040c04	// 00040c00, wbregs names: I2CCPU_OVW, I2CCPU_OVERRIDE
#define	R_I2CCPU_ADDR   	0x00040c08	// 00040c00, wbregs names: I2CCPU_ADDR, I2CCPU_ADDRESS
#define	R_I2CCPU_CKCOUNT	0x00040c0c	// 00040c00, wbregs names: I2CCPUCLK, I2CCPU_CKCOUNT
#define	R_I2CDMA        	0x00040c40	// 00040c40, wbregs names: I2CDMA
#define	R_I2CDMA_ADDR   	0x00040c44	// 00040c40, wbregs names: I2CDMAADDR
#define	R_I2CDMA_BASE   	0x00040c48	// 00040c40, wbregs names: I2CDMABASE
#define	R_I2CDMA_LEN    	0x00040c4c	// 00040c40, wbregs names: I2CDMALEN
#define	R_RXNETCK0      	0x00040c80	// 00040c80, wbregs names: RXNETCLK0, RXNETCK0
#define	R_RXNETCK1      	0x00040c84	// 00040c80, wbregs names: RXNETCLK1, RXNETCK1
#define	R_RXNETCK2      	0x00040c88	// 00040c80, wbregs names: RXNETCLK2, RXNETCK2
#define	R_RXNETCK3      	0x00040c8c	// 00040c80, wbregs names: RXNETCLK3, RXNETCK3
#define	R_TXNETCLK      	0x00040c90	// 00040c80, wbregs names: TXNETCLK
#define	R_BUILDTIME     	0x00040cc0	// 00040cc0, wbregs names: BUILDTIME
#define	R_GPIO          	0x00040cc4	// 00040cc4, wbregs names: GPIO, GPI, GPO
#define	R_NETDBG        	0x00040cc8	// 00040cc8, wbregs names: NETDBG
#define	R_NETLOCK       	0x00040ccc	// 00040ccc, wbregs names: NETLOCK
#define	R_SICLKFREQ     	0x00040cd0	// 00040cd0, wbregs names: SICLKFREQcreate_clock, -period, 5.2, -name, SIREF, -waveform, {0.0, 2.6, }, -add, [get_ports, i_clk_si_p]
#define	R_SIREFCLK      	0x00040cd4	// 00040cd4, wbregs names: SIREFCLK
#define	R_SIREFFREQ     	0x00040cd8	// 00040cd8, wbregs names: SIREFFREQ
#define	R_SPIO          	0x00040cdc	// 00040cdc, wbregs names: SPIO
#define	R_VERSION       	0x00040ce0	// 00040ce0, wbregs names: VERSION
// HDMI video processing pipe registers
#define	R_VIDPIPE       	0x00041000	// 00041000, wbregs names: VIDPIPE, VIDCTRL
#define	R_HDMIFREQ      	0x00041004	// 00041000, wbregs names: HDMIFREQ
#define	R_SIFREQ        	0x00041008	// 00041000, wbregs names: SIFREQ
#define	R_PXFREQ        	0x0004100c	// 00041000, wbregs names: PXFREQ
#define	R_INSIZE        	0x00041010	// 00041000, wbregs names: INSIZE
#define	R_INPORCH       	0x00041014	// 00041000, wbregs names: INPORCH
#define	R_INSYNC        	0x00041018	// 00041000, wbregs names: INSYNC
#define	R_INRAW         	0x0004101c	// 00041000, wbregs names: INRAW
#define	R_HDMISIZE      	0x00041020	// 00041000, wbregs names: HDMISIZE
#define	R_HDMIPORCH     	0x00041024	// 00041000, wbregs names: HDMIPORCH
#define	R_HDMISYNC      	0x00041028	// 00041000, wbregs names: HDMISYNC
#define	R_HDMIRAW       	0x0004102c	// 00041000, wbregs names: HDMIRAW
#define	R_OVADDR        	0x00041030	// 00041000, wbregs names: OVADDR
#define	R_OVSIZE        	0x00041034	// 00041000, wbregs names: OVSIZE
#define	R_OVOFFSET      	0x00041038	// 00041000, wbregs names: OVOFFSET
#define	R_FPS           	0x0004103c	// 00041000, wbregs names: FPS
#define	R_SYNCWORD      	0x00041040	// 00041000, wbregs names: VSYNCWORD
#define	R_VIDRCAP       	0x00041044	// 00041000, wbregs names: VIDRCAP
#define	R_VIDGCAP       	0x00041048	// 00041000, wbregs names: VIDGCAP
#define	R_VIDBCAP       	0x0004104c	// 00041000, wbregs names: VIDBCAP
#define	R_CMAP          	0x00041800	// 00041000, wbregs names: CMAP
#define	R_BKRAM         	0x00080000	// 00080000, wbregs names: RAM
// ZipCPU control/debug registers
#define	R_ZIPCTRL       	0x00100000	// 00100000, wbregs names: CPU, ZIPCTRL
#define	R_ZIPREGS       	0x00100080	// 00100000, wbregs names: ZIPREGS
#define	R_ZIPS0         	0x00100080	// 00100000, wbregs names: SR0
#define	R_ZIPS1         	0x00100084	// 00100000, wbregs names: SR1
#define	R_ZIPS2         	0x00100088	// 00100000, wbregs names: SR2
#define	R_ZIPS3         	0x0010008c	// 00100000, wbregs names: SR3
#define	R_ZIPS4         	0x00100090	// 00100000, wbregs names: SR4
#define	R_ZIPS5         	0x00100094	// 00100000, wbregs names: SR5
#define	R_ZIPS6         	0x00100098	// 00100000, wbregs names: SR6
#define	R_ZIPS7         	0x0010009c	// 00100000, wbregs names: SR7
#define	R_ZIPS8         	0x001000a0	// 00100000, wbregs names: SR8
#define	R_ZIPS9         	0x001000a4	// 00100000, wbregs names: SR9
#define	R_ZIPS10        	0x001000a8	// 00100000, wbregs names: SR10
#define	R_ZIPS11        	0x001000ac	// 00100000, wbregs names: SR11
#define	R_ZIPS12        	0x001000b0	// 00100000, wbregs names: SR12
#define	R_ZIPSSP        	0x001000b4	// 00100000, wbregs names: SSP, SR13
#define	R_ZIPCC         	0x001000b8	// 00100000, wbregs names: ZIPCC, CC, SCC, SR14
#define	R_ZIPPC         	0x001000bc	// 00100000, wbregs names: ZIPPC, PC, SPC, SR15
#define	R_ZIPUSER       	0x001000c0	// 00100000, wbregs names: ZIPUSER
#define	R_ZIPU0         	0x001000c0	// 00100000, wbregs names: UR0
#define	R_ZIPU1         	0x001000c4	// 00100000, wbregs names: UR1
#define	R_ZIPU2         	0x001000c8	// 00100000, wbregs names: UR2
#define	R_ZIPU3         	0x001000cc	// 00100000, wbregs names: UR3
#define	R_ZIPU4         	0x001000d0	// 00100000, wbregs names: UR4
#define	R_ZIPU5         	0x001000d4	// 00100000, wbregs names: UR5
#define	R_ZIPU6         	0x001000d8	// 00100000, wbregs names: UR6
#define	R_ZIPU7         	0x001000dc	// 00100000, wbregs names: UR7
#define	R_ZIPU8         	0x001000e0	// 00100000, wbregs names: UR8
#define	R_ZIPU9         	0x001000e4	// 00100000, wbregs names: UR9
#define	R_ZIPU10        	0x001000e8	// 00100000, wbregs names: SR10
#define	R_ZIPU11        	0x001000ec	// 00100000, wbregs names: SR11
#define	R_ZIPU12        	0x001000f0	// 00100000, wbregs names: SR12
#define	R_ZIPUSP        	0x001000f4	// 00100000, wbregs names: USP, UR13
#define	R_ZIPUCC        	0x001000f8	// 00100000, wbregs names: ZIPUCC, UCC
#define	R_ZIPUPC        	0x001000fc	// 00100000, wbregs names: ZIPUPC, UPC
#define	R_ZIPSYSTEM     	0x00100100	// 00100000, wbregs names: ZIPSYSTEM, ZIPSYS
#define	R_ZIPPIC        	0x00100100	// 00100000, wbregs names: ZIPPIC
#define	R_ZIPWDOG       	0x00100104	// 00100000, wbregs names: ZIPWDOG
#define	R_ZIPBDOG       	0x00100108	// 00100000, wbregs names: ZIPBDOG
#define	R_ZIPAPIC       	0x0010010c	// 00100000, wbregs names: ZIPAPIC
#define	R_ZIPTIMA       	0x00100110	// 00100000, wbregs names: ZIPTIMA
#define	R_ZIPTIMB       	0x00100114	// 00100000, wbregs names: ZIPTIMB
#define	R_ZIPTIMC       	0x00100118	// 00100000, wbregs names: ZIPTIMC
#define	R_ZIPJIFF       	0x0010011c	// 00100000, wbregs names: ZIPJIFF
#define	R_ZIPMTASK      	0x00100120	// 00100000, wbregs names: ZIPMTASK
#define	R_ZIPMMSTL      	0x00100124	// 00100000, wbregs names: ZIPMMSTL
#define	R_ZIPMPSTL      	0x00100128	// 00100000, wbregs names: ZIPMPSTL
#define	R_ZIPMINSN      	0x0010012c	// 00100000, wbregs names: ZIPMINSN
#define	R_ZIPUTASK      	0x00100130	// 00100000, wbregs names: ZIPUTASK
#define	R_ZIPUMSTL      	0x00100134	// 00100000, wbregs names: ZIPUMSTL
#define	R_ZIPUPSTL      	0x00100138	// 00100000, wbregs names: ZIPUPSTL
#define	R_ZIPUINSN      	0x0010013c	// 00100000, wbregs names: ZIPUINSN
#define	R_ZIPDMAC       	0x00100140	// 00100000, wbregs names: ZIPDMAC


//
// The @REGDEFS.H.DEFNS tag
//
// @REGDEFS.H.DEFNS for masters
#define	BAUDRATE	1000000
// @REGDEFS.H.DEFNS for peripherals
#define	BKRAMBASE	0x00080000
#define	BKRAMLEN	0x00080000
// @REGDEFS.H.DEFNS at the top level
// End of definitions from REGDEFS.H.DEFNS
//
// The @REGDEFS.H.INSERT tag
//
// @REGDEFS.H.INSERT for masters
// @REGDEFS.H.INSERT for peripherals
////////////////////////////////////////////////////////////////////////////////
//
// ZipCPU register definitions
// {{{

#define	CPU_GO		0x0000
#define	CPU_HALT	0x0001
#define	CPU_STALL	0x0002
#define	CPU_STEP	0x0004
#define	CPU_RESET	0x0008
#define	CPU_CLRCACHE	0x0010
// (Reserved)		0x00e0
#define	CPU_SLEEPING	0x0100
#define	CPU_GIE		0x0200
#define	CPU_INT		0x0400
#define	CPU_BREAK	0x0800
#define	CPU_EXINT	0xfffff000
//
#define	CPU_sR0		0x0020
#define	CPU_sSP		0x002d
#define	CPU_sCC		0x002e
#define	CPU_sPC		0x002f
#define	CPU_uR0		0x0030
#define	CPU_uSP		0x003d
#define	CPU_uCC		0x003e
#define	CPU_uPC		0x003f

#ifdef	BKROM_ACCESS
#define	RESET_ADDRESS	@$[0x%08x](bkrom.REGBASE)
#else
#ifdef	FLASH_ACCESS
#define	RESET_ADDRESS	@$[0x%08x](RESET_ADDRESS)
#else
#define	RESET_ADDRESS	0x00080000
#endif	// FLASH_ACCESS
#endif	// BKROM_ACCESS
// }}}
// @REGDEFS.H.INSERT from the top level
typedef	struct {
	unsigned	m_addr;
	const char	*m_name;
} REGNAME;

extern	const	REGNAME	*bregs;
extern	const	int	NREGS;
// #define	NREGS	(sizeof(bregs)/sizeof(bregs[0]))

extern	unsigned	addrdecode(const char *v);
extern	const	char *addrname(const unsigned v);
// End of definitions from REGDEFS.H.INSERT


#endif	// REGDEFS_H
