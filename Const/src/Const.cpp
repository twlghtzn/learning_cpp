//============================================================================
// Name        : Const.cpp
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
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; } // doesn't change anything
};

int main() {

	const double PI = 3.141592;
	cout << PI << endl;

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	int value = 8;

	const int * const pValue = &value;

	cout << *pValue << endl;

	int number = 11;
//	pValue = &number; // reassign pointer, error with: int * const pValue = &value; constant pointer
//	*pValue = 12; // change value, error with: const int *pValue = &value; constant value

	cout << *pValue << endl;

	return 0;
}
