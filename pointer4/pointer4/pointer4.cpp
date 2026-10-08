#include<iostream>
using namespace std;

void AAddOne(int *a)
{

	*a += 1;

}

int main()
{
	int a = 10;
	AAddOne(&a);
	cout << a << endl;

	system("pause");
}