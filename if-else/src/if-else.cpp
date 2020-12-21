//============================================================================
// Name        : if-else.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "1.\tAdd new record." << endl; //tab
	cout << "2.\tDelete record." << endl;
	cout << "3.\tView record." << endl;
	cout << "4.\tSearch record." << endl;
	cout << "5.\tQuit." << endl;

	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;

	if (value < 3) {
		cout << "Insufficient privileges." << endl;
	} else {
		cout << "Privilege level sufficient." << endl;
	}

	if (value == 5) {
		cout << "Quitting ..." << endl;
	} else {
		cout << "Not quitting." << endl;
	}
	return 0;
}
