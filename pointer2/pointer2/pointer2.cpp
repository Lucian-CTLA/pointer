#include<iostream>
using namespace std;
int main()
{
	int a = 1025;
	int *p;
	p = &a;
	cout << "Size of integer is: " << sizeof(int) << endl;
	cout << "Address of p: " << p << endl;
	cout <<"Address of a: " << &a << endl;
	cout <<"Value of p: " << *p << endl;

	cout << "Address of p+1: " << p+1 << endl;//+4
	cout << "Value of p+1: " << *p+1 << endl;//+1

	char* p0;
	p0 = (char*)p;//typecasting
	cout << p0 << endl;
	cout<< "Size of char is: " << sizeof(char) << endl;
	cout << "Address of p0: " << p0 << endl;
	cout << "Value of p0: " << *p0 << endl;
	cout << "Address of p0+1: " << p0+1 << endl;//+1
	cout << "Value of p0+1: " << *p0+1 << endl;//+3
	system("pause");

	//Void pointer - Genric pointer
	void p1;
	p1 = p;
	cout << "Address of p1 is: " << p1 << endl;//just print address
}