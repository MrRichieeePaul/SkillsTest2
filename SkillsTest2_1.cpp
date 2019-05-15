#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout << "Enter first number, second number, third number separated by spaces... ";
	cin >> a >> b >> c; 
	if (a>b && a>c)
		cout << "The Largest of the three numbers is: " << a;
	else if (b>a && b>c)
		cout << "The Largest of the three numbers is: " << b;
	else if (c>a && c>b)
		cout << "The Largest of the three numbers is: " << c;
	else 
		cout << "Invalid Input";
	_getch();
	return 0;
}
