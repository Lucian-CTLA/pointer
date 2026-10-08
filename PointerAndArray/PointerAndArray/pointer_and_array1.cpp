#include<iostream>
using namespace std;
int main()
{
	int A[] = { 2,4,5,8,1 };
	int i;
	int* p = A;
	for (i = 0;i < 5;i++)
	{
		cout << "Address: "<<&A[i] << endl;
		cout << "Address: "<< A+i << endl;
		cout << "Value: " << A[i] << endl;
		cout << "Value: " << *(A+i) << endl;
	}

	system("pause");
}