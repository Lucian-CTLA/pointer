#include<iostream>
#include<string>
using namespace std;
//callback function should compare two integers,should return 1 if first element has
//higher rank,0 if elements are equal and -1 if second element has higher rank

int compare(int a, int b)
{
	if (a > b)return -1;
	else return 1;
}

void BubbleSort(int n, int* A,int (*compare)(int,int)) 
{
	int i, j, temp;
	for (i = 0;i < n;i++) 
	{
		for (j = 0;j < n - 1;j++)
		{
			if (compare(A[j],A[j+1])>0)//compare A[j] with A[j+1] and SWAP if needed
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int A[] = { 3,2,1,5,6,4 };
	int num = sizeof(A) / sizeof(A[0]);
	BubbleSort(num, A,compare);

	for (int i = 0;i < num;i++) 
	{
		cout << A[i] << endl;
	}

	system("pause");
}