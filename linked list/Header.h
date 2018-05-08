template < class itemtype>
class linkedlist
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
	linkedlist()
	{
		length = 0;
		cur = NULL;
		head = NULL;
		tail = NULL;
	}
	void insert(itemtype x)
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
	void print()
	{
		if (length == 0)
			return;
		cur = head;
		while (cur != NULL)
		{
			cout << cur->info << endl;
			cur = cur->next;
		}
	}
	bool find(itemtype n)
	{
		cur = head;
		while (cur != NULL)
		{
			if (cur->info == n)
				return 1;
			cur = cur->next;
		}
		return 0;
	}
	int size()
	{
		return length;
	}
	void erase(itemtype x)
	{
		while (head != NULL&&head->info == x)
		{
			head = head->next;
			length--;
		}
		cur = head;
		while (cur != NULL&&cur->next != NULL)
		{
			if (cur->next->info == x)
			{
				cur->next = cur->next->next;
				length--;
			}
			else
			{
				cur = cur->next;
			}
		}
		tail = cur;
	}
};