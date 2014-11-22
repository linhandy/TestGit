// Test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "SingleLink.h"
#include "DoubleLink.h"
#include "Queue.h"

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
	*/
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
	int a;
	cin>>a;
	return 0;
}


