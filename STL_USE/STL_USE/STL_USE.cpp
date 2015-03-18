// STL_USE.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// 标准STL
#include "vector_test.h"
#include "dqueue_test.h"
#include "list_test.h"
#include "string_test.h"
#include "map_test.h"
#include "set_test.h"
//非标准STL，散列容器


int _tmain(int argc, _TCHAR* argv[])
{
	// vector_test();
	// dqueue_test();
	// list_test();
	//string_test();
	//map_test();
	set_test();
	// auto ptr

	system("pause");
	return 0;
}

