/*
 * Person.cpp
 *
 *  Created on: Dec 24, 2020
 *      Author: gyors
 */

#include "Person.h"
#include <sstream>

Person::Person() {
	name = "undefined";
	age = 0;
}

Person::Person(string newName, int newAge) {
	name = newName;
	age = newAge;
}

string Person::toString() {
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << ", age: ";
	ss << age;

	return ss.str();
}
