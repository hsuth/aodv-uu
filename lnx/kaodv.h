/*****************************************************************************
 *
 * Copyright (C) 2001 Uppsala University and Ericsson AB.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Erik Nordström, <erik.nordstrom@it.uu.se>
 *
 *****************************************************************************/
#ifndef _KAODV_H
#define _KAODV_H

#define SKB_TAIL_PTR(skb) skb_tail_pointer(skb)
#define SKB_NETWORK_HDR_RAW(skb) skb_network_header(skb)
#define SKB_NETWORK_HDR_IPH(skb) ((struct iphdr *)skb_network_header(skb))
#define SKB_MAC_HDR_RAW(skb) skb_mac_header(skb)
#define SKB_SET_NETWORK_HDR(skb, offset) skb_set_network_header(skb, offset)

#define AODV_PORT 654

#endif /* _KAODV_H */
