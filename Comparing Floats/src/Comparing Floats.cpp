//============================================================================
// Name        : Comparing.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float value1 = 1.1;
	float value2 = 1.1;

	if (value1 == value2) {
		cout << "equals" << endl;
	} else {
		cout << "not equal" << endl;
	}

	cout << setprecision(10) << value1 << endl;

	if (value1 == 1.1) {
			cout << "equals" << endl;
		} else {
			cout << "not equal" << endl;
		}
	return 0;
}
