//============================================================================
// Name        : Copy.cpp
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
	Animal() { cout << "Animal created." << endl; };
	Animal(const Animal& other): name(other.name) { cout << "Animal created by copying." << endl; };// default copy constructor overridden
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; } // doesn't change anything
};

int main() {

	Animal animal1;
	animal1.setName("Freddy");

	Animal animal2 = animal1; // calling copy constructor
	animal2.speak();
	animal2.setName("Bob");

	animal1.speak();
	animal2.speak();

	Animal animal3(animal1); //using copy constructor directly
	animal3.speak();

	return 0;
}
