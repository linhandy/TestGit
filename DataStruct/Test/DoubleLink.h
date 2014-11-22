
typedef struct DNode
{
	int data;
	DNode* next;
	DNode* prev;
}DNode;

class DoubleLink
{
private:
	DNode* head;
public:
	DoubleLink()
	{
		head = new DNode();
		head->next = NULL;
		head->prev = NULL;
	}
	DNode* insert_node(int value)
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		DNode* p = head;
		DNode* s = head->next;
		DNode * new_node = new DNode();
		new_node->data = value;
		new_node->next = NULL;
		new_node->prev = NULL;
		
		while(s != NULL && value > p->next->data)
		{
			p = p->next;
			s = s->next;
		}

		//Inset in middle
		if (s != NULL)
		{
			new_node->next = s;
			s->prev = new_node;
			p->next = new_node;
			new_node->prev = p;
		}
		// Inset at last 
		else
		{
			new_node->next = s;
			p->next = new_node;
			new_node->prev = p;
		}
		return head;
	}
	DNode* delete_node(int value)
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		DNode* p = head;
		DNode* s = head->next;
		if (s == NULL)
			return head;
		while(s != NULL && p->next->data != value)
		{
			p = p->next;
			s = s->next;
		}
		if (s == NULL)
		{
			cout<<"The node "<<value<<" is not found!"<<endl;
			return head;
		}
		//delete first
		if (s->next != NULL)
		{
			p->next = s->next;
			s->next->prev = p;
			delete s;
		}
		else
		{
			p->next = s->next;
			delete s;
		}
		cout<<"The node "<<value<<" has beed deleted!"<<endl;   
		return head;
	}
	int print_node_data()
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		DNode *p = head->next;
		while(p != NULL)
		{
			cout<<p->data<<endl;
			p= p->next;
		}
		return 0;
	}
	int get_node_count()
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		DNode *p = head->next;
		int n = 0;
		while(p != NULL)
		{
			p= p->next;
			n++;
		}
		cout<<"nof node:"<<n<<endl;
		return n;
	}
	DNode* sort_list()
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		DNode* p = head;
		DNode* s = head->next;
		int n = get_node_count();
		for(int i =0; i < n; i++)
		{
			p = head->next;
			for(int j=0; j < n-i-1; j++)
			{
				if (p->data > p->next->data)
				{
					int tmp = p->data;
					p->data = p->next->data;
					p->next->data = tmp;
				}
				p = p->next;
			}
		}
		return head;
	}
	DNode* reverse()
	{
		if (head == NULL|| head->next == NULL)
			return head;
		DNode* p1 = head->next;
		DNode* p2 = head->next->next;
		while(p2 != NULL)
		{
			DNode* p3 = p2->next;
			p2->next = p1;
			p1->prev = p2;
			p1 = p2;
			p2 = p3;
		}
		head->next->next = NULL;
		head->next = p1;
		p1->prev = head;
		return head;	
	}
};