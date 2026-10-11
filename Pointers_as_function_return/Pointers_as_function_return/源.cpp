#include<iostream>
#include<string>
using namespace std;

void print()
{
	cout << "Hello world" << endl;
}

int *Add(int* a, int* b)//called func
{
	int* c =(int*)malloc(sizeof(int));
	*c = *a + *b;
	return c;
}

int main()//calling func
{
	int x = 2, y = 4;//value in x of main is copied to a of Add and y is also
	int *z = Add(&x, &y);
	print();
	cout << *z << endl;
	system("pause");
}