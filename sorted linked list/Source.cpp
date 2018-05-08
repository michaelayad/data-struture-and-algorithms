#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	sortedlinkedlist<int>l;
	l.insert(3);
	l.insert(-5);
	l.insert(1);
	l.insert(9);
	l.insert(5);
	l.print();
	cout << l.find(9) << endl;
	l.erase(1);
	l.print();
	system("pause");
	return 0;
}