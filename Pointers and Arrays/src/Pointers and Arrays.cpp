//============================================================================
// Name        : Pointers.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string texts[] = {"one", "two", "three"};

	string *pTexts = texts; // points to the first string

	cout << pTexts << endl;

	for (int i = 0; i < (int)(sizeof(texts) / sizeof(string)); i++) {
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	for (int i = 0; i < (int)(sizeof(texts) / sizeof(string)); i++, pTexts++) {
		cout << *pTexts << " " << flush;
	}

	cout << endl;

	string *pElement = &texts[0];
	cout << pElement << endl;
	string *pEnd = &texts[2];

	while (true) {

		cout << *pElement << " " << flush;

		if (pElement == pEnd) {
			break;
		}

		pElement++;
	}

	return 0;
}
