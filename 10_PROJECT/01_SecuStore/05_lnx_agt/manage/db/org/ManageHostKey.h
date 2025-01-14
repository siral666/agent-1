/*
 * Copyright (C) 2021-2026 ASHINi Corp. 
 * 
 * This program is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public 
 * License as published by the Free Software Foundation; either 
 * version 3 of the License, or any later version. 
 * 
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details. 
 * 
 * You should have received a copy of the GNU General Public 
 * License along with this program. If not, see <https://www.gnu.org/licenses/>.   
 *  
 * 
 */

//---------------------------------------------------------------------------

#ifndef ManageHostKeyH
#define ManageHostKeyH
//---------------------------------------------------------------------------

class CManageHostKey : public CManageBase<DB_HOST_KEY>
{
public:
	INT32			LoadDBMS();

public:
	String			GetHash();

public:
	INT32			AddHostKey(DB_HOST_KEY& data);
    INT32			EditHostKey(DB_HOST_KEY& data);
    INT32			DelHostKey(UINT32 nID);

public:
	String			GetEncBkKey(String strDecKey);
	String			GetDecBkKey(String strEncKey = "");
	String			GetDecRcKey(String strEncKey = "");
	INT32			ClearHostKey_RcKey();

public:
	String			GetEncCrKey(String strDecKey);
	String			GetDecCrKey(String strEncKey = "");

public:
	INT32			GetPkt(MemToken& RecvToken, DB_HOST_KEY& data, UINT32 nPktType);
	INT32			SetPkt(MemToken& SendToken);
    INT32			SetPkt(PDB_HOST_KEY pdata, MemToken& SendToken);

public:
	CManageHostKey();
    ~CManageHostKey();

};

extern CManageHostKey*	t_ManageHostKey;

#endif
