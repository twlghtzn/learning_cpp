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
	bool happy;
public:
	Person(): name("unnamed"), age(0), happy(0) {}; //{} because have to provide implementation
	Person(string name, int age);
	Person(string name, int age, bool happy);
	string toString();
};

#endif /* PERSON_H_ */
