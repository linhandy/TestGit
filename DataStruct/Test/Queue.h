typedef struct QNode
{
	int data;
	QNode* next;
}QNode;

class Queue
{
private:
	QNode* first;
	QNode* rear;
public:
	Queue()
	{
		first = rear = new QNode();
		first->next = NULL;
		rear->next = NULL;
	}
	QNode* enQueue(int value)
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		QNode* tmp = new QNode;
		tmp->data = value;
		tmp->next = NULL;
		rear->next = tmp;
		rear = tmp;
		return first;
	}
	QNode* deQueue()
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		if (first->next == NULL)
		{
			return first;
		} 
		QNode* tmp = first->next;
		// only one node
		if (first->next == rear)
		{
			first->next = tmp->next;
			rear->next = tmp->next;
			delete tmp;
		}
		else
		{
		    first->next = tmp->next;
		    delete tmp;
		}
		
		return first;
	}
	int get_node_count()
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		QNode * p = first->next;
		int n = 0;
		while(p != NULL)
		{
			n++;
			p = p->next;
		}
		cout<<"nof node:"<<n<<endl;
		return n;
	}
	int print_node_data()
	{
		printf("%s,%d, %s, \n",__FILE__, __LINE__, __FUNCTION__);
		QNode * p = first->next;
		while(p != NULL)
		{
			cout<<p->data<<endl;
			p = p->next;
		}
		return 0;
	}
};