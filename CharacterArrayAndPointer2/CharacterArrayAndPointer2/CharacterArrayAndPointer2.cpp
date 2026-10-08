#include<iostream>
#include<string>
using namespace std;

void Print(const char* C)//const is just read not write
{
	while (*C != 0)
	{
		cout << *C << endl;
		C++;
	}
	cout << endl;
}

int main()
{
	char C[20] = "Hello";//String gets stored in the space of array
	Print(C);
}