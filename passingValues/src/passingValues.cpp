//============================================================================
// Name        : passingValues.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showMenu() { // have to define it over the function call
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

int getInput() { // can't return arrays

	cout << "Enter selection: " << flush;

	int input;
	cin >> input;

	return input;
}

void processSelection(int option) {

	switch (option) {
	case 1:
		cout << "Searching ..." << endl;
		break;
	case 2:
		cout << "Viewing ..." << endl;
		break;
	case 3:
		cout << "Quitting ..." << endl;
		break;
	default:
		cout << "Please select an item from the menu." << endl;
	}
}

int main() {

	showMenu();
	int selection = getInput();
	processSelection(selection);

	return 0;
}
