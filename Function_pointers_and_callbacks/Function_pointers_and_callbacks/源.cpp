#include<iostream>
#include<string>
using namespace std;

void A()
{
	cout << "Hello" << endl;

}

void B(void (*ptr)())//function pointer as argument
{
	ptr();//call-back function that "ptr" points to
}

int main()
{
	B(A);

	system("pause");
}