/*
 * Animal.h
 *
 *  Created on: Jan 1, 2021
 *      Author: gyors
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>
using namespace std;

namespace orsi {

const string CATNAME = "Tiddles";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace orsi */

#endif /* ANIMAL_H_ */
