/*
 *  Copyright (C) 2008 Nuke (wiinuke@gmail.com)
 *
 *  this file is part of GeckoOS for USB Gecko
 *  http://www.usbgecko.com
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __PATCHCODE_H__
#define __PATCHCODE_H__

// Globals
extern u32 hooktype;
extern int patched;
extern u8 configbytes[2];
extern u32 regionfree;
extern bool hookpatched;

#define APP_NAME				"Cfg USB Loader MOD patched"
#define APP_VERSION				"70r78.12"
#define PRIVSERV_WIIMMFI		"wiimmfi.de"

// Function prototypes
bool dogamehooks(void *addr, u32 len);
void langpatcher(void *addr, u32 len);
void vidolpatcher(void *addr, u32 len);
void patchdebug(void *addr, u32 len);
bool PatchReturnTo(void *Address, int Size, u32 id);
void WFCPatch(void *addr, u32 len, const char* domain);
u32 do_new_wiimmfi(); 
u32 do_new_wiimmfi_nonMKWii(); 


#endif // __PATCHCODE_H__
