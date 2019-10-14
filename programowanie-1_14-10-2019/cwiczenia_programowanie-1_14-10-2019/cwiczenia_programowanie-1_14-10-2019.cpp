#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Podaj x ";
	cin >> x;
	cout << "Podaj y ";
	cin >> y;

	cout << "x + y " << x + y << endl;
	cout << "x - y " << x - y << endl;
	cout << "x / y " << x / y << endl;
	cout << "x * y " << x * y << endl;

	int a = 5;
	cout << "a++ " << a++ << endl;
	cout << "a " << a << endl;
	cout << "++a " << ++a << endl;
	cout << "a " << a << endl;

	int b = 10;
	cout << "(a & b) " << (a & b) << endl;
	cout << "(a | b) " << (a | b) << endl;
	cout << "(a << 2) " << (a << 2) << endl;
	cout << "(a ^ b) " << (a ^ b) << endl;
	cout << "!b " << !b << endl;

	system("pause");
	return 0;
}