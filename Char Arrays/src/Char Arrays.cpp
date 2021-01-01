//============================================================================
// Name        : Char.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[] = "hello"; // primitive string

	for (int i = 0; i < sizeof(text); i++) { // sizeof returns 6!, last char is null string terminator
		cout << i << "; " << text[i] << endl;
	}

	int k = 0;

	while (true) {

		if (text[k] == 0) // if if 1liner, can leave brackets
			break;

		cout << text[k] << flush;

		k++;
	}

	cout << endl;

	// Exercise

	char text2[] = "helomi";

	for (int i = 0; i < (int)sizeof(text2) - 1; i++) {

		cout << text2[i] << flush;

	}

	cout << endl;

	k = 0;

	while(true) {

		if (text2[k] == 0)
			break;

		cout << text2[k] << flush;
		k++;
	}

	return 0;
}
