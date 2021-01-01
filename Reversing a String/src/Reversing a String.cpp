//============================================================================
// Name        : Reversing.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[] = "hello";

	int nChars = sizeof(text) - 1;

	char *pStart = text;
	char *pEnd = text + nChars - 1;

	while (pStart < pEnd) {

		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;
	}

	cout << text << endl;

	// Exercise

	int k = nChars - 1;

	for (int i = 0; i < nChars / 2; i++) {

			char temp = text[i];
			text[i] = text[k];
			text[k] = temp;

			k--;
	}

	cout << text << endl;

	return 0;
}
