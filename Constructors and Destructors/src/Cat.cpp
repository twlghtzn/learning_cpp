/*
 * Cat.cpp
 *
 *  Created on: Dec 24, 2020
 *      Author: gyors
 */

#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "Cat created" << endl;
	happy = true;
}

Cat::~Cat() {
	cout << "Cat destroyed." << endl;
}

void Cat::speak() {
	if (happy) {
		cout << "Meouw!" << endl;
	} else {
		cout << "Sssss!" << endl;
	}
}

