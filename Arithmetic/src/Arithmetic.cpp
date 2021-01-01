//============================================================================
// Name        : Arithmetic.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
 * +
 * -
 * *
 * /
 * +=
 * -=
 * /=
 * *=
 * %
 * %=
 * precedence
 */

int main() {

	double value1 = (double)7/2;
	cout << value1 << endl;

	int value2 = (int)7.3; //without casting not ok
	cout << value2 << endl;

	int value3 = 8;
	value3 += 1; // value3 = value3 + 1 or value3++;
	cout << value3 << endl;

	int value4 = 10;
	value4 /= 5; // value4 = value4/5;
	cout << value4 << endl;

	int value5 = 13%5;
	cout << value5 << endl;

	double equation = ((5 / 4)%2) + (2.3 * 6);
	cout << equation << endl;

	cout << "========================" << endl;

	int totalSeconds = 72934;
	int hours = totalSeconds / 3600;
	int minutes = (totalSeconds % 3600) / 60;
	int seconds = ((totalSeconds % 3600) % 60);
	cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;

	cout << "========================" << endl;

	for (int i = 1; i < 10001; i++) {
		if (i%100 == 0) {
			cout << i << ". ." << endl;
		}
	}

	return 0;
}
