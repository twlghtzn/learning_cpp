//============================================================================
// Name        : Floating.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float fValue = 123.456789;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << setprecision(20) << fixed << fValue << endl;

	double dValue = 123.456789;
	cout << setprecision(20) << fixed << dValue << endl;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << "Size of long double: " << sizeof(dValue) << endl;

	long double lValue = 123.456789876543210;
	cout << setprecision(20) << fixed << lValue << endl;
	cout << "Size of long double: " << sizeof(long double) << endl;
	cout << "Size of long double: " << sizeof(lValue) << endl;

	return 0;
}
