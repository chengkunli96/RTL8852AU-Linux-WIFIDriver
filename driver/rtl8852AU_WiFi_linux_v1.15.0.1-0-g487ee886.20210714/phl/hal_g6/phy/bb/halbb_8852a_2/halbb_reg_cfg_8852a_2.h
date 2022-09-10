/******************************************************************************
 *
 * Copyright(c) 2007 - 2017  Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * The full GNU General Public License is included in this distribution in the
 * file called LICENSE.
 *
 * Contact Information:
 * wlanfae <wlanfae@realtek.com>
 * Realtek Corporation, No. 2, Innovation Road II, Hsinchu Science Park,
 * Hsinchu 300, Taiwan.
 *
 * Larry Finger <Larry.Finger@lwfinger.net>
 *
 *****************************************************************************/
#ifndef _HALBB_REG_CFG_8852A_2_H_
#define _HALBB_REG_CFG_8852A_2_H_

#ifdef BB_8852A_2_SUPPORT

void halbb_cfg_bb_phy_8852a_2(struct bb_info *bb, u32 addr, u32 data,
			    enum phl_phy_idx phy_idx);

void halbb_cfg_bb_gain_8852a_2(struct bb_info *bb, u32 addr, u32 data);

#endif
#endif /* RTL8822C_SUPPORT*/
