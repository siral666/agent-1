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

#ifndef DB_HOST_POLICY_H_4D39CDDB_E289_4d56_9F98_FE42776F4467
#define DB_HOST_POLICY_H_4D39CDDB_E289_4d56_9F98_FE42776F4467

typedef struct _db_host_policy
{
	_db_host_policy()
    {
    	nID					= 0;
		nUsedFlag			= USED_FLAG_TYPE_USED;
		nRegDate			= 0;
		nHostID				= 0;	
    }

    UINT32		nID;
	UINT32		nUsedFlag;
	UINT32		nRegDate;
	UINT32		nHostID ;

	DB_POLICY	tDP;

}DB_HOST_POLICY, *PDB_HOST_POLICY;

typedef list<DB_HOST_POLICY>			TListDBHostPolicy;
typedef TListDBHostPolicy::iterator		TListDBHostPolicyItor;

typedef map<UINT32, DB_HOST_POLICY>		TMapDBHostPolicy;
typedef TMapDBHostPolicy::iterator		TMapDBHostPolicyItor;

#endif //DB_HOST_POLICY_H_4D39CDDB_E289_4d56_9F98_FE42776F4467



