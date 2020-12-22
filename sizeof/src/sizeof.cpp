//============================================================================
// Name        : sizeof.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value = 34;

	cout << sizeof(value) << endl;
	cout << sizeof(int) << endl;

	cout << endl;

	int values[] = {4, 7, 3, 4};
	cout << sizeof(values) << endl;

	int arraySize = sizeof(values);
	int intSize = sizeof(int);

	for (unsigned int i = 0; i < sizeof(values) / sizeof(int); i++) { // sizeof returns unsigned value (unsigned can't be negative)

		cout << values[i] << " " << flush;
	}

	cout << endl;

	for (int i = 0; i < arraySize / intSize; i++) {

			cout << values[i] << " " << flush;

		}

	return 0;
}
