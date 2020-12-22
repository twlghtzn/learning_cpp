//============================================================================
// Name        : Arrays.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Array of integers" << endl;
	cout << "=================" << endl;
	int values[3];

	values[0] = 88;
	values[1] = 123; // no pre-defined value
	values[2] = 7;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	// cout << "Bad idea: " << values[3] << endl; NO INDEX OUT OF BOUND, DON'T WORK WITH IT!

	cout << "Array of doubles" << endl;
	cout << "=================" << endl;
	double numbers[4] = {4.5, 2.3, 7.2, 8.1};

	for (int i = 0; i < 4; i++) {

		cout << "Element at index " << i << ": " << numbers[i] << endl;

	}

	cout << "Initializing with zero values" << endl;
	cout << "=================" << endl;

	int zeros[8] = {};

	for (int i = 0; i < 8; i++) {

			cout << "Element at index " << i << ": " << zeros[i] << endl;

		}

	cout << "Initializing with strings" << endl;
	cout << "=================" << endl;

	string texts[] = {"apple", "banana", "orange"};

	for (int i = 0; i < 3; i++) {

			cout << "Element at index " << i << ": " << texts[i] << endl;

		}

	return 0;
}
