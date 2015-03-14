// SuperLog.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
#include "data.h"
// 88 b4 08 00 01 10 10 00
MSG_INFO QOS_APPLY_DS[] = {{"ds_id", 1},{"ifIndex", 4}};
BB4INFO_S g_bb4_ifo[] = { {0x88b4, "QOS_APPLY_DS", QOS_APPLY_DS},
	 
                        };

int _tmain(int argc, _TCHAR* argv[])
{
	BB4INFO_S tmp_info;
	char msg[1000];
	cout<<"Input message:"<<endl;
	cin.getline(msg, sizeof(msg));
	string str;
	char c_key[4];
	int j = 0;
	for(int i =0; i< 5; i++)
	{
		if(msg[i] == ' ')continue;
		bb4_key[j] = msg[i];
		j++;
	}
	// find bb4
	for(int i = 0; i < sizeof(g_bb4_ifo); i++)
	{
		 //
	}
	system("pause");
	return 0;
}

