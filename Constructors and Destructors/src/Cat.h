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
	bool happy; // if initialized here, will be static
public:
	void speak();
	Cat(); // constructor, no return type
	~Cat();
};

#endif /* CAT_H_ */
