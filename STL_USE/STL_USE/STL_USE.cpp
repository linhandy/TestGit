// STL_USE.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	vector<int>* v = new vector<int>(10);
	v->push_back(1);
	delete v;
	system("pause");
	return 0;
}

