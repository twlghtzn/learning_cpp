//============================================================================
// Name        : prototypesAndIncludes.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream> // pre-processor looks for #, < standard location, not statements for
                    // compiler, statements for pre-pocessor

#include "utils.h" // " included in project

using namespace std;

int main() {

	doSomething();
	doSomething();

	return 0;
}

void doSomething() {
	cout << "Hello" << endl;
}
