//============================================================================
// Name        : Pointers.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/* void manipulate(double value) {
	cout << "2. Value of double in manipulate: " << value << endl;
	value = 10.0;
	cout << "3. Value of double in manipulate: " << value << endl;
}

int main() {

	int nValue = 8;

	int *pnValue = &nValue; //pointer to an int equals the address of nValue, it's not an int value, it's a memory address

	nValue = 9;

	cout << "Int value: " << nValue << endl;
	cout << "Pointer to int address: " << pnValue << endl; //0x -> hexadecimal
//	cout << "Memory address of int value: " << nValue.toString() << endl; - doesn't work on primitives

	cout << "Int value via pointer: " << *pnValue << endl; //dereferencing the pointer

	cout << "=========================" << endl;
	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	manipulate(dValue);
	cout << "4. dValue: " << dValue << endl;

	return 0;
} */

void manipulate(double *pValue) {
	cout << "2. Value of double in manipulate: " << *pValue << endl;
	*pValue = 10.0;
	cout << "3. Value of double in manipulate: " << *pValue << endl;
}

int main() {

	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue);
	cout << "4. dValue: " << dValue << endl;

	return 0;
}
