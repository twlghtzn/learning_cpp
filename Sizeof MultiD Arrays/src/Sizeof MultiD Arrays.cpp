//============================================================================
// Name        : Sizeof.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << sizeof(string) << endl;

	string animals[][3] = { // gotta have same length, have to tell it
			{ "fox", "dog", "cat" },
			{ "mouse", "squirrel", "parrot" }
	};

	cout << sizeof(animals) << endl;
	cout << sizeof(animals[0]) << endl;
	cout << sizeof(animals[1]) << endl;

	cout << endl;

	for (unsigned int i = 0; i < sizeof(animals)/sizeof(animals[i]); i++) {

		for (unsigned int j =  0; j < sizeof(animals[i]) / sizeof(string); j++) {

			cout << animals[i][j] << " " << flush;

		}

		cout << endl;

	}

	return 0;
}
