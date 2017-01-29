// Calculator
// Demonstrates built-in arithmetic operators

#include <iostream>
using namespace std;

int main()
{
	cout << "7 + 3 = " << 7 + 3 << endl;
	cout << "7 - 3 = " << 7 - 3 << endl;
	cout << "7 * 3 = " << 7 * 3 << endl;

	cout << "7 / 3 = " << 7 / 3 << endl;
	cout << "7.0 / 3.0 = " << 7.0 / 3.0 << endl;

	cout << "7 % 3 = " << 7 % 3 << endl; // Return remainder of integer division

	cout << "7 + 3 * 5 = " << 7 + 3 * 5 << endl;
	cout << "(7 + 3) * 5 = " << (7 + 3) * 5 << endl;
	
	return 0;
}