#include<iostream>
using namespace std;
int main()
{
	int x = 5;
	int* p = &x;
	cout <<"Value of p: " << *p << endl;//5
	*p = 6;
	int** q = &p;
	int*** r = &q;
	cout << "Value of q: " << **q << endl;//6
	cout << "value of r: " << ***r << endl;//6
	***r = 10;
	cout << "Value of x: " << x << endl;//10
	**q = *p + 2;
	cout << "Value of x: " << x << endl;//12

	system("pause");
}