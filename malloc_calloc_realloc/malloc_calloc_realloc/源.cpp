#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n ;
	int* A = (int*)malloc(n*sizeof(int));
	for (int i = 0;i < n;i++)
	{
		A[i] = i + 1;
	}
	int* B =(int*) realloc(A,2*n*sizeof(int));//== free(A)
	for (int i = 0;i < 2*n;i++)
	{
		cout << B[i] << endl;
	}

	system("pause");
}