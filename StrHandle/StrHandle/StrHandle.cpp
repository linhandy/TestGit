// StrHandle.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	char st1[100] = "I am char array 1";
	char st2[100] = "I am char array 2";
	string str1 = "I am string 1";
	string str2 = "I am string 2";
	// len
	int st1_len  = strlen(st1);
	int str1_len = str1.length();
	cout<<"st_len:"<<st1_len<<" str_len:"<<str1_len<<endl;
	// compare
	cout<<"st1==st2 ? "<<strcmp(st1, st2)<<endl;
	cout<<"str1==str2 ? "<<str1.compare(str2)<<endl;
	// append
	cout<<"strcat(st1, st2)"<<strcat(st1, st2)<<endl;
	cout<<""<<str1.append(str2)<<endl;
	// str
	strcpy(st1,st2);
	cout<<"strcpy(st1,st2)"<<strcpy(st1,st2)<<endl;
	cout<<"str1.str(0, 4)"<<str1.substr(0, 4);
	// find 
	cout<<"strchr(st1, 'I')"<<strchr(st1, 'I')<<endl;
	cout<<"str1.find('amd')"<<str1.find("amd")<<endl;
	// c->c++
	string cpp_str = string(st1);
	
	// int to string
	int int_value = 1024;
	char cstr[10];
	string str_value = "";
	//1----------------------------------//
    sprintf(cstr, "%d",int_value);
	str_value = string(cstr);
	//2----------------------------------//
	_itoa( int_value, cstr, 10 );
	str_value = string(cstr);
	//3----------------------------------//
	stringstream ss;
	ss<<int_value;
	str_value = ss.str();

	// string to int
    //1----------------------------------//
    sscanf(cstr, "%d", &int_value);
	//2----------------------------------//
	ss<<cstr;
	ss>>int_value;
	//3----------------------------------//
	//使用boost库中的lexical_cast
	//int_value = boost::lexical_cast<int>(str_value);

	system("pause");
	return 0;
}

