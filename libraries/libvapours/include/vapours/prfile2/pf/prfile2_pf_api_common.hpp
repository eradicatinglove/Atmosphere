/*
 * Copyright (c) 2018-2020 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <vapours/prfile2/pf/prfile2_pf_config.hpp>
#include <vapours/prfile2/pf/prfile2_pf_types.hpp>
#include <vapours/prfile2/prfile2_critical_section.hpp>

namespace ams::prfile2::pf {

    int Initialize(u32 config, void *param);

    int Attach(DriveTable **drive_table);

}