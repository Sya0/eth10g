////////////////////////////////////////////////////////////////////////////////
//
// Filename:	zipelf.h
// {{{
// Project:	10Gb Ethernet switch
//
// Purpose:	The ZIPELF class is designed to simplify the representation
// 		of the fields in an ELF file, for the purpose of loading a
// 	computer from the sections within it.
//
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
#ifndef	ZIPELF_H
#define	ZIPELF_H

#include <stdint.h>

class	ELFSECTION {
public:
	uint32_t	m_start, m_len;
	char		m_data[4];
};

bool	iself(const char *fname);
void	elfread(const char *fname, uint32_t &entry, ELFSECTION **&sections);

#endif
