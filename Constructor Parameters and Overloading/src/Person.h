/*
 * Person.h
 *
 *  Created on: Dec 24, 2020
 *      Author: gyors
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person();
	Person(string newName) {name = newName; age = 0;}; // inline implementation, method overloading
	Person(string newName, int newAge);
	string toString();
};

#endif /* PERSON_H_ */
