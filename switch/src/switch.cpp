//============================================================================
// Name        : switch.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value = 5;

	const int number = 5;

	switch (value) {

	case 4: // variables not allowed, strings not allowed
		cout << "Value is 4." << endl;
		break;

	case number: // const variables allowed
		cout << "Value is 5." << endl;
		break;

	case 6:
		cout << "Value is 6." << endl;
		break;

	default:
		cout << "Unrecognized value." << endl;

	}

	return 0;
}
