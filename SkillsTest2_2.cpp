#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter a number: ";
	cin >> b;
	cout << "Multiplication table of " << b << "\n";
	for (a=1;a<=10;a++)
		cout << a << "*" << b << "=" << a*b << "\n";
	_getch();
	return 0;
}
