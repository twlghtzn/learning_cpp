//============================================================================
// Name        : References.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void changeSomething(double &value) {
	value = 123.4;
}

int main() {

	int value1 = 8;
	int value2 = value1;
	value2 = 10;

	cout << "Value1: " << value1 << endl;
	cout << "Value2: " << value2 << endl;

	int value3 = 8;
	int &value4 = value3; // reference variable, alias to existing variable
	value4 = 10;

	cout << "Value3: " << value3 << endl;
	cout << "Value4: " << value4 << endl;

	double value = 4.321;
	changeSomething(value);
	cout << value << endl;

	double *pValue = &value;
	cout << pValue << endl;

	return 0;
}
