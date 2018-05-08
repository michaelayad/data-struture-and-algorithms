template <class itemtype>
class arrlist
{
	itemtype arr[100];
	int length;
	int cur;
public:
	arrlist()
	{
		length = 0;
		cur = 0;
		for (int i = 0;i < 100;i++)
			arr[i] = NULL;
	}
	void insert(itemtype x)
	{
		int i = 0;
		while (i < length&&arr[i] <= x)
		{
			i++;
		}
		for (int j = length;j > i;j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[i] = x;
		length++;
	}
	void del(itemtype x)
	{
		for (int i = 0;i < length;i++)
		{
			if (arr[i] == x)
			{
				length--;
				for (int j = i;j < length;j++)
				{
					arr[j] = arr[j + 1];
				}
				i--;
			}
		}
	}
	void print()
	{
		for (int i = 0;i < length;i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	int size()
	{
		return length;
	}
	int find(itemtype x)
	{
		for (int i = 0;i < length;i++)
		{
			if (arr[i] == x)
				return i;
		}
		return -1;
	}

};