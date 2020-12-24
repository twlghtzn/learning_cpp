//============================================================================
// Name        : This.cpp
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
	Person person2("Bob", 42);
	Person person3("Sue", 45);
	Person person4("Peter", 32, false);

	cout << person.toString() << "; memory location: " << &person << endl;
	cout << person2.toString() << "; memory location: " << &person2 << endl;
	cout << person3.toString() << "; memory location: " << &person3 << endl;
	cout << person4.toString() << "; memory location: " << &person4 << endl;

	return 0;
}
