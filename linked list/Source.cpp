#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	linkedlist<int>l;
	l.insert(1);
	l.insert(1);
	l.insert(1);
	l.insert(1);
	l.insert(5);
	l.print();
	l.find(9);
	l.erase(1);
	l.print();
	system("pause");
	return 0;
}