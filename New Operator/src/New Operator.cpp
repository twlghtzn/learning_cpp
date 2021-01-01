//============================================================================
// Name        : New.cpp
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

int main() {

	Animal *pCat1 = new Animal();
//	*pCat1.setName("Freddy"); // dereferencing won't work, because . has higher precedence than *
	pCat1->setName("Freddy"); // using this, no destructor is called
	pCat1->speak();
	delete pCat1; // new + delete

	cout << sizeof(pCat1) << endl;
	cout << sizeof(long) << endl;

	return 0;
} // variable no more relevant (goes out of scope) -> destructor
