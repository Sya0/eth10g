////////////////////////////////////////////////////////////////////////////////
//
// Filename:	./main_tb.cpp
// {{{
// Project:	10Gb Ethernet switch
//
// DO NOT EDIT THIS FILE!
// Computer Generated: This file is computer generated by AUTOFPGA. DO NOT EDIT.
// DO NOT EDIT THIS FILE!
//
// CmdLine:	autofpga -I .: -d -o . allclocks.txt siclk.txt sirefclk.txt global.txt wbdown.txt icape.txt version.txt gpio.txt spio.txt wbuconsole.txt zipmaster.txt bkram.txt sdio.txt emmc.txt netrouter.txt cpunet.txt hdmi.txt cec.txt edid.txt netscope.txt hdmiclrscope.txt mem_bkram_only.txt mem_flash_bkram.txt i2ccpu.txt fan.txt netclk.txt sirefclkcounter.txt
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
//
// SIM.INCLUDE
//
// Any SIM.INCLUDE tags you define will be pasted here.
// This is useful for guaranteeing any include functions
// your simulation needs are called.
//
#include "verilated.h"
#include "Vmain.h"
#define	BASECLASS	Vmain

#include "design.h"
#include "regdefs.h"
#include "testb.h"
#include "sdiosim.h"
#include "dbluartsim.h"
#include "zipelf.h"

#include "hdmisim.h"
#include "sdiosim.h"
#include "byteswap.h"
//
// SIM.DEFINES
//
// This tag is useful fr pasting in any #define values that
// might then control the simulation following.
//
////////////////////////////////////////////////////////////////////////////////
//
// ZipCPU simulation defines
// {{{
#ifndef	VVAR
#ifdef	ROOT_VERILATOR

#include "Vmain___024root.h"
#define	VVAR(A)	rootp->main__DOT_ ## A

#elif	defined(NEW_VERILATOR)
#define	VVAR(A)	main__DOT_ ## A
#else
#define	VVAR(A)	v__DOT_ ## A
#endif
#endif

#define	OPT_PIPELINED
#define	CPUVAR(A)	VVAR(_swic__DOT__thecpu__DOT__core__DOT_ ## A)

#define	cpu_break 	VVAR(_swic__DOT__cpu_break)
// }}}
#ifndef VVAR
#ifdef  ROOT_VERILATOR
#include "Vmain___024root.h"

#define VVAR(A) rootp->main__DOT_ ## A
#elif	defined(NEW_VERILATOR)
#define VVAR(A) main__DOT_ ## A
#else
#define VVAR(A) v__DOT_ ## A
#endif
#endif

#define	block_ram	VVAR(_bkrami__DOT__mem)
class	MAINTB : public TESTB<Vmain> {
public:
		// SIM.DEFNS
		//
		// If you have any simulation components, create a
		// SIM.DEFNS tag to have those components defined here
		// as part of the main_tb.cpp function.
	SDIOSIM		*m_sdio;
	DBLUARTSIM	*m_wbu;
	int	m_cpu_bombed;
#ifdef VIDPIPE_ACCESS
	HDMIWIN *m_hdmitx;
#endif	// VIDPIPE_ACCESS
	SDIOSIM		*m_emmc;
	MAINTB(void) {
		// SIM.INIT
		//
		// If your simulation components need to be initialized,
		// create a SIM.INIT tag.  That tag's value will be pasted
		// here.
		//
		// From sdio
#ifdef	SDIO_ACCESS
		m_sdio = new SDIOSIM("sdcard.img");
#endif
		// From gpio
		m_core->i_gpio = 16;
		// From wbu
		m_wbu = new DBLUARTSIM();
		m_wbu->setup(100);
		// From zip
		m_cpu_bombed = 0;
		// From hdmi
#ifdef	VIDPIPE_ACCESS
		m_hdmitx = new HDMIWIN(800, 600);
#endif	// VIDPIPE_ACCESS
		// From emmc
#ifdef	EMMC_ACCESS
		m_emmc = new SDIOSIM("emmc.img");
#endif
	}

	void	reset(void) {
		// SIM.SETRESET
		// If your simulation component needs logic before the
		// tick with reset set, that logic can be placed into
		// the SIM.SETRESET tag and thus pasted here.
		//
		m_core->i_cpu_reset = 1;
		TESTB<Vmain>::reset();
		// SIM.CLRRESET
		// If your simulation component needs logic following the
		// reset tick, that logic can be placed into the
		// SIM.CLRRESET tag and thus pasted here.
		//
		m_core->i_cpu_reset = 0;
	}

	void	trace(const char *vcd_trace_file_name) {
		fprintf(stderr, "Opening TRACE(%s)\n",
				vcd_trace_file_name);
		opentrace(vcd_trace_file_name);
		m_time_ps = 0;
	}

	void	close(void) {
		m_done = true;
	}

	void	tick(void) {
		TESTB<Vmain>::tick(); // Clock.size = 4
	}


	// Evaluating clock clk

	// sim_clk_tick() will be called from TESTB<Vmain>::tick()
	//   following any falling edge of clock clk
	virtual	void	sim_clk_tick(void) {
		// Default clock tick
		//
		// SIM.TICK tags go here for SIM.CLOCK=clk
		//
		// SIM.TICK from i2c
		m_core->i_i2c_scl = m_core->o_i2c_scl;
		m_core->i_i2c_sda = m_core->o_i2c_sda;
		// SIM.TICK from sdio
#ifdef	SDIO_ACCESS
		{ unsigned	tmp, tmp_async;
		m_sdio->apply(
			(unsigned)m_core->o_sdio_sdclk,
			(unsigned)m_core->o_sdio_cfg_ddr,
			(unsigned)m_core->o_sdio_cmd_en,
			(unsigned)m_core->o_sdio_cmd_data,
			(unsigned)m_core->o_sdio_data_en,
			(unsigned)m_core->o_sdio_rx_en,
			(unsigned)m_core->o_sdio_tx_data,
			tmp, tmp_async,
			m_core->i_sdio_ad_data);
		m_core->i_sdio_cmd_strb = (tmp >> 30) & 3;
		m_core->i_sdio_cmd_data = (tmp >> 28) & 3;
		m_core->i_sdio_rx_strb  = (tmp >> 24) & 3;
		m_core->i_sdio_rx_data  =  tmp & 0x0ffff;
		m_core->i_sdio_ac_valid = (tmp_async & 2) ? 1:0;
		m_core->i_sdio_ad_valid =  tmp_async & 1;
		if (!m_core->o_sdio_afifo_reset_n) {
			m_core->i_sdio_ad_valid = 0;
			m_core->i_sdio_ad_data = 0;
		} }
#endif
		// SIM.TICK from gpio
		pausetrace((m_core->o_gpio & 0x040) ? false:true);
		// SIM.TICK from wbu
		m_core->i_wbu_uart_rx = (*m_wbu)(m_core->o_wbu_uart_tx);
		// SIM.TICK from zip
#ifdef	INCLUDE_ZIPCPU
		// ZipCPU Sim instruction support
		// {{{
		if (m_cpu_bombed) {
			if (m_cpu_bombed++ > 12)
				m_done = true;
		} else if (m_core->cpu_break) {
			printf("\n\nBOMB : CPU BREAK RECEIVED\n");
			m_cpu_bombed++;
		}
		// }}}
#endif	// INCLUDE_ZIPCPU

		// SIM.TICK from cec
		m_core->i_hdmirx_cec = m_core->o_hdmirx_cec;
		m_core->i_hdmitx_cec = m_core->o_hdmitx_cec;
		// SIM.TICK from emmc
#ifdef	EMMC_ACCESS
		{ unsigned	tmp, tmp_async;
		m_emmc->apply(
			(unsigned)m_core->o_emmc_sdclk,
			(unsigned)m_core->o_emmc_cfg_ddr,
			(unsigned)m_core->o_emmc_cmd_en,
			(unsigned)m_core->o_emmc_cmd_data,
			(unsigned)m_core->o_emmc_data_en,
			(unsigned)m_core->o_emmc_rx_en,
			(unsigned)m_core->o_emmc_tx_data,
			tmp, tmp_async,
			m_core->i_emmc_ad_data);
		m_core->i_emmc_cmd_strb = (tmp >> 30) & 3;
		m_core->i_emmc_cmd_data = (tmp >> 28) & 3;
		m_core->i_emmc_rx_strb  = (tmp >> 24) & 3;
		m_core->i_emmc_rx_data  =  tmp & 0x0ffff;
		m_core->i_emmc_ac_valid = (tmp_async & 2) ? 1:0;
		m_core->i_emmc_ad_valid =  tmp_async & 1;
		if (!m_core->o_emmc_afifo_reset_n) {
			m_core->i_emmc_ad_valid = 0;
			m_core->i_emmc_ad_data = 0;
		} }
#endif
		// SIM.TICK from gnet
		m_core->i_gnet_phy_fault= 0;
	}

	// Evaluating clock clk200

	// sim_clk200_tick() will be called from TESTB<Vmain>::tick()
	//   following any falling edge of clock clk200
	virtual	void	sim_clk200_tick(void) {
		//
		// SIM.TICK tags go here for SIM.CLOCK=clk200
		//
		// No SIM.TICK tags defined
		m_changed = false;
	}

	// Evaluating clock siclk

	// sim_siclk_tick() will be called from TESTB<Vmain>::tick()
	//   following any falling edge of clock siclk
	virtual	void	sim_siclk_tick(void) {
		//
		// SIM.TICK tags go here for SIM.CLOCK=siclk
		//
		// No SIM.TICK tags defined
		m_changed = false;
	}

	// Evaluating clock pixclk

	// sim_pixclk_tick() will be called from TESTB<Vmain>::tick()
	//   following any falling edge of clock pixclk
	virtual	void	sim_pixclk_tick(void) {
		//
		// SIM.TICK tags go here for SIM.CLOCK=pixclk
		//
		// SIM.TICK from hdmi
#ifdef	VIDPIPE_ACCESS
		// Simulate an external HDMI monitor
		(*m_hdmitx)(m_core->o_hdmi_blu, m_core->o_hdmi_grn, m_core->o_hdmi_red);
#endif	// VIDPIPE_ACCESS
	}
	//
	// Step until clock clk ticks
	//
	virtual	void	tick_clk(void) {
		// Advance until the default clock ticks
		do {
			tick();
		} while(!m_clk.rising_edge());
	}

	//
	// Step until clock clk200 ticks
	//
	virtual	void	tick_clk200(void) {
		do {
			tick();
		} while(!m_clk200.rising_edge());
	}

	//
	// Step until clock siclk ticks
	//
	virtual	void	tick_siclk(void) {
		do {
			tick();
		} while(!m_siclk.rising_edge());
	}

	//
	// Step until clock pixclk ticks
	//
	virtual	void	tick_pixclk(void) {
		do {
			tick();
		} while(!m_pixclk.rising_edge());
	}

	//
	// The load function
	//
	// This function is required by designs that need the flash or memory
	// set prior to run time.  The test harness should be able to call
	// this function to load values into any (memory-type) location
	// on the bus.
	//
	bool	load(uint32_t addr, const char *buf, uint32_t len) {
		uint32_t	start, offset, wlen, base, adrln;

		//
		// Loading the bkram component
		//
		base  = 0x00080000; // in octets
		adrln = 0x00080000;

		if ((addr >= base)&&(addr < base + adrln)) {
			// If the start access is in bkram
			start = (addr > base) ? (addr-base) : 0;
			offset = (start + base) - addr;
			wlen = (len-offset > adrln - start)
				? (adrln - start) : len - offset;
#ifdef	BKRAM_ACCESS
			// FROM bkram.SIM.LOAD
			char	*mem;
			start = start & (-(64));
			wlen = (wlen+(64-1))&(-64);

			// Need to byte swap data to get it into the memory
			//  But ... it's byte swapping at the *WORD* width, not
			//  the 32-bit width we've built the byteswapbuf() for.
			mem = (char *)&m_core->block_ram[start];
			for(unsigned k=0; k<wlen; k++) {
				unsigned	s;
				s = (k&(-64))
					|((64-1-k) & (64-1));
				mem[s] = buf[k];
			}
			// AUTOFPGA::Now clean up anything else
			// Was there more to write than we wrote?
			if (addr + len > base + adrln)
				return load(base + adrln, &buf[offset+wlen], len-wlen);
			return true;
#else	// BKRAM_ACCESS
			return false;
#endif	// BKRAM_ACCESS
		//
		// End of components with a SIM.LOAD tag, and a
		// non-zero number of addresses (NADDR)
		//
		}

		return false;
	}

	//
	// KYSIM.METHODS
	//
	// If your simulation code will need to call any of its own function
	// define this tag by those functions (or other sim code), and
	// it will be pasated here.
	//
#ifdef	INCLUDE_ZIPCPU
	// ZipCPU Access functions
	// {{{
	void	loadelf(const char *elfname) {
		// {{{
		ELFSECTION	**secpp, *secp;
		uint32_t	entry;

		elfread(elfname, entry, secpp);

		for(int s=0; secpp[s]->m_len; s++) {
			bool	successful_load;
			secp = secpp[s];

			successful_load = load(secp->m_start,
				secp->m_data, secp->m_len);

			if (!successful_load) {
				printf("Could not load section "
					"from %08x to %08x--no such address\n",
					secp->m_start,
					secp->m_start+secp->m_len);
			}
		} free(secpp);
	}
	// }}}

	void	cpu_dbg_write(const uint32_t addr, const uint32_t data) {
		// {{{
		// printf("CPU-DBG-WRITE(@0x%08x, 0x%08x);\n", addr, data);
		m_core->cpu_sim_cyc   = 1;
		m_core->cpu_sim_stb   = 1;
		m_core->cpu_sim_we    = 1;
		m_core->cpu_sim_addr  = addr >> 2;
		m_core->cpu_sim_data  = data;

		do {
			tick_clk();
		} while(m_core->cpu_sim_stall);

		m_core->cpu_sim_stb = 0;

		while(!m_core->cpu_sim_ack)
			tick_clk();

		m_core->cpu_sim_cyc  = 0;
		m_core->cpu_sim_we   = 0;
		m_core->cpu_sim_addr = 0;
		m_core->cpu_sim_data = 0;

		tick_clk();
	}
	// }}}

	uint32_t cpu_dbg_read(const uint32_t addr) {
		// {{{
		uint32_t	result;

		// printf("CPU-DBG-READ(@0x%08x);\n", addr);
		m_core->cpu_sim_cyc   = 1;
		m_core->cpu_sim_stb   = 1;
		m_core->cpu_sim_we    = 0;
		m_core->cpu_sim_addr  = addr >> 2;
		m_core->cpu_sim_data  = 0;

		do {
			tick_clk();
		} while(m_core->cpu_sim_stall);

		m_core->cpu_sim_stb = 0;

		while(!m_core->cpu_sim_ack)
			tick_clk();

		result = m_core->cpu_sim_idata;

		m_core->cpu_sim_cyc  = 0;
		m_core->cpu_sim_we   = 0;
		m_core->cpu_sim_addr = 0;
		m_core->cpu_sim_data = 0;

		tick_clk();

		return result;
	}
	// }}}

	// }}}
#endif // INCLUDE_ZIPCPU
	void	connect_idler(void) {
		Glib::signal_idle().connect(
			sigc::mem_fun((*this),&MAINTB::on_tick));
	}

	bool	on_tick(void) {
		for(int i=0; i<15; i++)
			tick();
		return true;
	}

};
