#include<iostream>
#include"Header.h"
using namespace std;
int main() {
	arrlist<int>a;
	a.insert(3);
	a.insert(1);
	a.insert(8);
	a.insert(-2);
	a.insert(9);
	a.insert(0);
	a.print();
	a.del(3);
	a.print();
	cout << "size  " << a.size() << endl;
	cout << "pos 8 is " << a.find(8) << endl;

	system("pause");
	return 0;
}