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

#ifndef ManageWinSessionH
#define ManageWinSessionH
//---------------------------------------------------------------------------

class CManageWinSession : public CManageBase<MEM_WIN_SESSION>
{
private:
	TListID				m_tSessionChangeList;
	TListID				m_tSessionChgHKList;

public:
	INT32				InitWinSession();
	INT32				AddWinSession(UINT32 nID, UINT32 nAddEvt = 1, UINT32 nLoginTime = 0);
	INT32				DelWinSession(UINT32 nID);
	INT32				EdistrUserName(MEM_WIN_SESSION& tMWS);

public:
	String				GetLogonUserName();
	String				GetLogonDomainName();
	INT32				GetSIDList(TListStr& tSIDList);

public:
	INT32				IsWinSessionChange();
	INT32				IsWinSessionChgHK();
	INT32				AddWinSessionChange(UINT32 nMode);

public:
	CManageWinSession();
    ~CManageWinSession();

};

//extern CManageWinSession	t_ManageWinSession;

#endif
