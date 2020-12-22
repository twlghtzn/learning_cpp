//============================================================================
// Name        : arrays-exercise.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int timesTable[10];
	int number = 12;

	for (int i = 0; i < 10; i++) {

		int times = i + 1;
		timesTable[i] = times * number;
		cout << times << " * " << number << " = " << timesTable[i] << endl;
	}

	return 0;
}
