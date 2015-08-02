// STL_USE.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// ��׼STL
#include "vector_test.h"
#include "dqueue_test.h"
#include "list_test.h"
#include "string_test.h"
#include "map_test.h"
#include "set_test.h"
//�Ǳ�׼STL��ɢ������

//self def
#include "String.h"

union u
{
    int i ;
    char x[2] ;
} a ;

//#define PARAM( x ) x##x
//#define ADDPARAM( x ) INT_##x

int _tmain(int argc, _TCHAR* argv[])
{
//	PARAM( ADDPARAM( 2 ) );
	// vector_test();
	// dqueue_test();
	// list_test();
	//string_test();
	//map_test();
	set_test();
	// auto ptr

	//Judge endian 
	a.x[0] ='1' ;
    a.x[1] ='2' ;
	printf("a.i= 0x%x \r\n", a.i);
    cout << a.i << endl ;

	//map test
	map_test();
	system("pause");
	return 0;
}
