//============================================================================
// Name        : Arrays.cpp
// Author      : twlghtzn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string numbers[] = {"one", "two", "three"}; // declared here can be seen anywhere!

void show1(const int nElements, string texts[]) {

//	cout << sizeof(texts) << endl; // size of the pointer

	for (int i = 0; i < nElements; i++) {
		cout << texts[i] << endl;
	}
}

void show2(const int nElements, string *texts) {

//	cout << sizeof(texts) << endl; // size of the pointer

	for (int i = 0; i < nElements; i++) {
		cout << texts[i] << endl;
	}
}

void show3(string (&texts)[3]) {

	for (int i = 0; i < (int)(sizeof(texts) / sizeof(string)); i++) {
		cout << texts[i] << endl;
	}
}

string *getArray() {

// local variable: no pointers! 	string texts[] = {"one", "two", "three"};

	return numbers;
}

char *getMemory() {

	char *pMem = new char[100];
	return pMem;
}

void freeMemory(char *pMem) {

	delete [] pMem;
}

int main() {

	string texts[] = {"apple", "orange", "banana"};

	cout << sizeof(texts) << endl;

	show1(3, texts);
	show2(3, texts);
	show3(texts);

	char *pMemory = getMemory();
	freeMemory(pMemory);

	return 0;
}
