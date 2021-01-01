//============================================================================
// Name        : Allocating.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char *pText = new char[26];

	char c = 97;

	for (int i = 0; i < 26; i++) {
		pText[i] = c;
		cout << pText[i] << endl;
		c++;
	}

	delete [] pText;

	return 0;
}
