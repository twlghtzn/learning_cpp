//============================================================================
// Name        : Getters.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;

int main() {

	Person person;

	person.setName("Peter");

	cout << person.toString() << endl;

	cout << "Name of person with get method: " << person.getName() << endl;

	return 0;
}
