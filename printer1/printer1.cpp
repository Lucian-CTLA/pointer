#include<iostream>
using namespace std;
int main()
{
	int a;
	int* p;
	a = 10;
	p = &a;//&a address of a
	cout << p << endl;
	cout<<*p<<endl;//*p - value at adress pointer by p
	cout << &a << endl;//address of a
	cout << a << endl;
	*p = 12;//dereferencing取消引用
	cout << a << endl;
	cout << "Address of p: " << p << endl;
	cout << "Value of p: " << *p << endl;
	int b = 20;
	*p = b;//Just change value if you want change the address you need write p=&b;
	cout << "Address of p: " << p << endl;
	cout << "Value of p: " << *p << endl;

	//pointer arithmetic
	cout << p << endl;//p is 2022
	cout << p + 1 << endl;//p+1 is 2026 ,1 is int
	system("pause");
}