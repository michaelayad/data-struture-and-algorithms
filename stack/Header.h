template<class itemtype>
class stack 
{
	struct node
	{
		itemtype info;
		node* next;
	};
	int length;
	node* cur;
	node* head;
	node* tail;
public:
	stack()
	{
		length = 0;
		cur = NULL;
		head = NULL;
		tail = NULL;
	}
	void push(itemtype x)
	{
		node* temp = new node;
		temp->info = x;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			temp->next = head;
			head = temp;
		}
		length++;
	}
	void pop()
	{
		if (head != NULL)
		{
			head = head->next;
			length--;
		}
	}
	itemtype top()
	{
		return head->info;
	}
	bool empty()
	{
		if (length)
			return 0;
		return 1;
	}
	int size()
	{
		return length;
	}
	void print()
	{
		cur = head;
		while (cur != NULL)
		{
			cout << cur->info << endl;
			cur = cur->next;
		}
	}
};