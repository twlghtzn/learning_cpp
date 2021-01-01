//============================================================================
// Name        : Returning.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Animal created." << endl;
	}

	Animal(const Animal& other) :
		name(other.name) {
		cout << "Animal created by copying." << endl;
	}

	~Animal() {
		cout << "Destructor called" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is: " << name << endl;
	}
};

/* optimization in the background, actually creates copy, not effective
 * Animal createAnimal() {
	Animal a;
	cout << &a << endl;
	a.setName("Bertie");
	return a;
} */

Animal *createAnimal() { // with pointer won't be destructed at method end, as with reference

	Animal *pAnimal = new Animal(); // new allocates memory on heap, not on stack
	pAnimal->setName("Bertie");
	return pAnimal;
}

int main() {

	Animal *pFrog = createAnimal();

	pFrog->speak();

	delete pFrog;

	return 0;
}
