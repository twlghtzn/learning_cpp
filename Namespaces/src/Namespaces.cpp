//============================================================================
// Name        : Namespaces.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Animal.h"
#include "Cat.h"
using namespace std;

//using namespace orsi;

int main() {

//	Cat cat;
//	cat.speak();

	orsi::Cat cat2;
	cat2.speak();

	cats::Cat cat3;
	cat3.speak();

	cout << orsi::CATNAME << endl;
	cout << cats::CATNAME << endl;

	return 0;
}
