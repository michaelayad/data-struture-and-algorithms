#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	queue<int>qe;
	qe.push(3);
	qe.push(5);
	qe.push(7);
	qe.push(9);
	qe.push(11);
	cout << "the queue is : " << endl;
	qe.print();
	qe.pop();
	cout << "the queue is : " << endl;
	qe.print();
	cout << "the first item is : " << endl;
	cout<<qe.front()<<endl;
	cout << "the last item is : " << endl;
	cout << qe.back() << endl;
	cout << "the size is : " << endl;
	cout << qe.size() << endl;
	cout << "check : " << endl;
	cout << qe.empty() << endl;
	system("pause");
	return 0;
}