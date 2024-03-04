

#include <iostream>
using namespace std;

void main()
{
	float a, b;
	char oper;
	cout << "\n\t\t\t\t\tSimple Calculator";
	cout << "\n________________________________________________________________________________________________________";
	cout << "\n\nOPERATIONS AVAILABLE: \n1. Addition ( + )\n2. Subtraction ( - )\n3. Multiplication ( * )\n4. Division ( / )\n5. Modulus ( % )  NOTE: Input should be just integer otherwise will be casted. \n\n\n";

	cout << "Please enter first number: ";
	cin >> a;
	cout << "Please enter second number: ";
	cin >> b;
	cout << "Please enter operator number: ";
	cin >> oper;
	cout << "\n\nAnswer: ";
	if (oper == '+')
		cout << a << " + " << b << " = " << a + b;
	else if (oper == '-')
		cout << a << " - " << b << " = " << a - b << "\n\n";
	else if (oper == '*')
		cout << a << " * " << b << " = " << a * b << "\n\n";
	else if (oper == '/') 
	{
		if (b == 0)
			cout << "\nNumber can't be devided by Zero.";
		else
		cout << a << " / " << b << " = " << a / b << "\n\n";
	}
	else if (oper == '%')
		cout << a << " % " << b << " = " << (int)a % (int)b << "\n\n";
	else
		cout << "WRONG COMMAND!!!";
	cout << "\n\n";
}