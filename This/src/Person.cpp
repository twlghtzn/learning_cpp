/*
 * Person.cpp
 *
 *  Created on: Dec 24, 2020
 *      Author: gyors
 */

#include "Person.h"
#include <sstream>

Person::Person(string name, int age) {
	this->name = name; // pointer variable
	this->age = age;
	happy = true;
}

// constructor initialization list, possible to mix with other initializing
Person::Person(string name, int age, bool happy) :
		name(name), age(age), happy(happy) {

}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << ", age: ";
	ss << age;
	ss << ", happy: ";
	ss << happy;

	return ss.str();
}
