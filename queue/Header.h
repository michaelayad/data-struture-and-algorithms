template <class itemtype>
class queue {
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
	queue()
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
			length++;
		}
		else
		{
			tail->next = temp;
			tail = temp;
			length++;
		}
	}
	void pop()
	{
		if (head != NULL)
		{
			head = head->next;
			length--;
		}
	}
	itemtype front()
	{
		return head->info;
	}
	itemtype back()
	{
		return tail->info;
	}
	int size()
	{
		return length;
	}
	bool empty()
	{
		if (length)
			return 0;
		return 1;
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