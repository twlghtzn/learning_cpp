/*
 * Cat.h
 *
 *  Created on: Dec 24, 2020
 *      Author: gyors
 */

#ifndef CAT_H_
#define CAT_H_

class Cat {
private:
	bool happy; // no auto set value, initialized in constructor usually

public:
	void makeHappy();
	void makeSad();
	void speak();
};

#endif /* CAT_H_ */
