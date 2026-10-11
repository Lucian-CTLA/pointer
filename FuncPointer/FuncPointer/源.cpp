#include<iostream>
using namespace std;

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int c;
	//pointer to func that should take
	//(int,int)as argument/parameter and return int
	int(*p)(int, int);
	p = &Add;
	c = (*p)(2, 3);
	cout << c << endl;

	system("pause");
}