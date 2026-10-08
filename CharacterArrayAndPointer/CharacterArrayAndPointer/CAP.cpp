#include<iostream>
#include<string>
using namespace std;
//String -- group of character

void Print(char* D)
{
	int i = 0;
	while (D[i] != '\0')
	{
		cout << D[i] << endl;
		i++;
	}
	cout <<endl;
}

int main()
{
	char C[20];
	C[0] = 'J';
	C[1] = 'O';
	C[2] = 'H';
	C[3] = 'N';
	C[4] = '\0';//char C[]="JONH";char C[5]={'J','O','N','H','\0'};
	cout <<  C << endl;
	int len = strlen(C);
	cout << "Length = " << len << endl;

	char D[20] = "Hello";
	Print(D);

	system("pause");
}