// TestCpp.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string.h>
#include <stdlib.h>
void Func(char str_arg[2])
{
	int m = sizeof(str_arg);
	int n = strlen(str_arg);
	printf("%d\n", m);
	printf("%d\n", n);
}

void Func2()
{
	int a[5] = {1, 2, 3, 4, 5};
	int * ptr = (int *)(&a + 1);
	printf("%d %d", *(a+1), *(ptr - 1));
}

void Func3()
{
    int a = 0x12345678;
	char* pc = (char*)&a;
	short* ps = (short*)&a;
	printf("0x%x, 0x%x, 0x%x\n", (int)pc[0], (int)pc[1], (int)pc[2]);
	printf("0x%x, 0x%x, 0x%x\n", (int)ps[0], (int)ps[1], (int)ps[2]);
}

typedef struct
{
	int a;
	char b;
	short c;
	char d;
}S;

void Func4(char str1[20])
{
	char str2[] = "hello";
	char *str3 = "hello";
	char *str4 = " hello";
	char *str5 = "hello";
	printf("%d\n", sizeof(str1));
	printf("%d\n", sizeof(str2));
	printf("%d\n", sizeof(str3));
	printf("%d\n", str2==str3);
	printf("%d\n", str3==str4);
	printf("%d\n", str3==str5);
}

void Func5()
{
  int a = (int)((int*)0 + 4);
  int b = (int)((short*)0 + 4);
  printf("%d\n", a);
  printf("%d\n", b);

}

int remove_space(char* str, int len)
{
	int space_count = 0;
	int i = 0;
	for (;i < len; i++)
	{
		if (' ' == str[i])
		{
			space_count++;
			int j = i;
			for (;j < len; j++)
			{
				str[j] = str[j+1];
			}
		}
	}
	return space_count;
}
typedef struct _Node
{
	_Node* next;
	int data;
}Node;
void revertList(Node* head)
{
	if (NULL == head || NULL == head->next)
	{
		return;
	}
	Node* p = head;
	Node* q = head->next;
	Node* s = NULL;
	while(NULL != q)
	{
		s = q->next;
		q->next = p;
		p = q;
		q = s;
	}
	head->next = NULL;
	head = p;
}
void revertList2(Node* pCur, Node* head)
{
	if (NULL == pCur || NULL == pCur->next)
	{
		head = pCur;
	}
	else
	{
		Node* p = pCur;
		Node* q = pCur->next;
		revertList2(q, head);
		q->next = p;
		p->next = NULL;
	}
}
void GetMemory(char* &p)
{
  p = (char *)malloc(100);
}

void Test(void)
{
	char *str = NULL;
	GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
}

void GetMemory2(char **p, int num)
{
  *p = (char *)malloc(num);
}

void Test2(void)
{
	char *str = NULL;
	GetMemory2(&str, 100);
	strcpy(str, "hello");
	printf(str);
}


typedef int * INTP;
int _tmain(int argc, _TCHAR* argv[])
{
	/*
	char str[]="Hello";
	Func(str);
	printf("\r\n");
	Func2();
	printf("\r\n");
	Func3();
	printf("\r\n");
	S s;
	printf("%d\n", sizeof(s));
	char str1[20] = "";
	Func4(str1);
	Func5();
	char str6[10] = " he llo ";
    int space_count = remove_space(str6, 10);
	printf("%d \r\n", space_count);

	Node n1, n2, n3;
	n1.data = 1;
	n1.next = &n2;
	n2.data = 2;
	n2.next = &n3;
	n3.data = 3;
	n3.next = NULL;
	revertList(&n1);
	revertList2(&n3, &n3);
	
	INTP ip = new int;
	INTP* IP = new  int*;
	int a;
	Test2
	*/
	int a;
	if(a='\0')
	{
		printf("a=0 true");
	}
	if(a=1)
	{
		printf("a=1");
	}


	system("pause");
	return 0;
}

