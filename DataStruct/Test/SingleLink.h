#include <iostream>
using namespace std;

typedef struct Node
{   
	int data;
	Node* next;
}Node;


class SingleLink
{
private:
	Node* head;
	
public:
	SingleLink()
	{
		head = new Node;
		head->next = NULL;
	}
	
	/*
	Node* create_node(int value)
	{
		Node* p, *s;
		p = head;
		bool is_continue = true;
		while(is_continue)
		{   
			int value;
			cout<<"Input an int:"<<endl;
			cin>>value;
			if (value != 0)
			{
				s = new Node;
				s->data = value;
				p->next = s;
				p = p->next;
			}
			else
			{
				is_continue = false;
				p->next = NULL;
			}
		}
		return head;
	}
	*/
	int get_node_count()
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		if(head == NULL)
			return 0;
		int n = 0;
		Node * p = head->next;
		while(p != NULL)
		{
			//cout<<p->data<<endl;
			n++;
			p = p->next;
		}
		cout<<"nof node:"<<n<<endl;
		return n;
	}
	int print_node_data()
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		if(head == NULL)
			return 0;
		Node * p = head->next;
		while(p != NULL)
		{
			cout<<p->data<<endl;
			p = p->next;
		}
		return 0;
	}
	Node* delete_node(int value)
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		if (head->next == NULL)
			return NULL;
		Node * p = head;
		Node * s = head->next;
		bool is_found = false;
		while (s != NULL)
		{
			if (s->data == value)
			{
				p->next = s->next;
				delete s;
				cout<<"The node "<<value<<"  has beed deleted"<<endl;
				is_found = true;
				break;
			}
			else
			{
				p = p->next;
				s = s->next;
			}
		}
		if (!is_found)
			cout<<"The node you input is not found!"<<endl;
		return head;
	}
	Node* insert_node(int value)
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		Node* p, *s;
		p = head;
		s = head->next;
		Node* node = new Node;
		node->data = value;
		node->next = NULL;
		// empty list
		if (s == NULL)
		{
			p->next =node;
		    return head;
		}
		while(s != NULL && value > s->data)
		{
			p = p->next;
			s = s->next;
		}
		p->next = node;
		node->next = s;
		return head; 
	}
	Node* sort_list()
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		Node* p = head;
		Node* s = head->next;
		if (p == NULL || s == NULL || s->next == NULL)
			return head;
		int node_cout = get_node_count();
		for(int i = 0; i < node_cout;i++)
		{
			s = head->next;
			for(int j = 0; j < node_cout-i-1; j++)
			{
				if (s->data > s->next->data)
				{
					int tmp = s->data;
				    s->data = s->next->data ;
					s->next->data = tmp;
				}
				s = s->next;
			}
		}
		return head;
	}
	Node* reverse()
	{
		printf("%s,%d, %s\n",__FILE__, __LINE__, __FUNCTION__);
		if (head == NULL || head->next == NULL)
			return head;
		Node * p1 = head->next;
		Node * p2 = head->next->next;
		while(p2 != NULL)
		{
			Node* p3 = p2->next;
			p2->next = p1;
			p1 = p2;
			p2 = p3;
		}
		head->next->next = NULL;
		head->next = p1;
	}
};
