// Test.cpp : 定义控制台应用程序的入口点。
//
#include <iostream>
using namespace std;

#include "stdafx.h"
#include "SingleLink.h"
#include "DoubleLink.h"
#include "Queue.h"
#include "bubbleSort.h"
#include "selectSort.h"
#include "insertSort.h"
#include "qsort.h"
#include "binSearch.h"
#include "subArrayMaxSum.h"
#include "TestConstructorCallVirFunc.h"

//int _tmain(int argc, _TCHAR* argv[])
int main(void)
{
	/*
	SingleLink sl;
	sl.insert_node(1);
	sl.insert_node(2);
	sl.insert_node(5);
	sl.insert_node(4);
	sl.insert_node(6);
	sl.print_node_data();
	sl.sort_list();
	sl.get_node_count();
	sl.print_node_data();
	sl.delete_node(1);
	sl.print_node_data();
	sl.delete_node(3);
	sl.print_node_data();
	sl.delete_node(4);
	sl.print_node_data();
	sl.reverse();
	sl.print_node_data();
	
	DoubleLink dl;
	dl.insert_node(1);
	dl.insert_node(2);
	dl.insert_node(4);
	dl.insert_node(3);
	dl.insert_node(7);
	dl.insert_node(5);
	dl.print_node_data();
	dl.delete_node(3);
	dl.print_node_data();
	dl.delete_node(4);
	dl.print_node_data();
	dl.delete_node(1);
	dl.print_node_data();
	dl.sort_list();
	dl.print_node_data();
	dl.reverse();
	dl.print_node_data();
	dl.sort_list();
	dl.print_node_data();
	
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(5);
	q.enQueue(4);
	q.get_node_count();
	q.print_node_data();
	q.deQueue();
	q.print_node_data();
	q.enQueue(7);
	q.print_node_data();
	

	int A[4] = {2, 3, 1, 4};
    bubbleSort(A, 4);
	cout<<"After bubbleSort:"<<endl;
    for (int i = 0; i < 4; i ++)
    {
        cout<<A[i]<<" ";
    }
	cout<<endl;

	int B[4] = {2, 3, 1, 4};
    selectSort(B, 4);
	cout<<"After selectSort:"<<endl;
    for (int i = 0; i < 4; i ++)
    {
        cout<<B[i]<<" ";
    }
	cout<<endl;

	int C[4] = {2, 3, 1, 4};
    insertSort(C, 4);
	cout<<"After insertSort:"<<endl;
    for (int i = 0; i < 4; i ++)
    {
        cout<<C[i]<<" ";
    }
	cout<<endl;

	int D[5] = {2, 5, 3, 1, 4};
    qsort(D, 0, 4);
	cout<<"After qsort:"<<endl;
    for (int i = 0; i < 5; i ++)
    {
        cout<<D[i]<<" ";
    }
	cout<<endl;
	
	// binary search
	int A[6] = {2, 3, 4, 5, 1, 7};
	selectSort(A, 6);
	int valueFind = 7;
	bool isFind = binSearch(A, 0 , 5, valueFind);
	cout<<valueFind<<" in A is "<<isFind<<endl;

	bool isFind2 = binSearch2(A, 0 , 5, valueFind);
	cout<<valueFind<<" in A is "<<isFind2<<endl;
	
    int A[8] = {1, -2, 3, 10, -4, 7, 2, -5};
	int maxSum = maxSubarray(A, 7);
	cout<<"maxSum is: " <<maxSum<<endl;
	
    // test constuctor call vitual func
    //Base* base = new Dev();
	//base->func();
	{
	    //Base base2;
		Dev dev;
	}

	int  a[5] = {1, 2, 3, 4, 5};  
    int  *ptr = (int *)(&a+1);  
    printf("%d %d",*(a+1),*(ptr-1));  
	int b =1;
	*/
//{
//	A a;       //很简单，定义a的时候调用了一次构造函数  
//        B b(a); 
//}
 //char str1[40]="hello world!"; 
 //char *str1="hello world!";
 //str1[4]='A';                      //若str1是指针型的，编译通过，但运行是此处会段错误
// printf("%s\n",str1);

	int temp;
	cin>>temp;
	return 0;
}


