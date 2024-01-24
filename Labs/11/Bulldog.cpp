#include "Bulldog.h"
#include "Pet.h"
#include <cstring>
#include <iostream>
using namespace std;

void Bulldog::calcCups() {
	if (weight < 3) {
		cups = 5;
	}
	else if (weight < 5) {
		cups = 7;
	}
	else {
		cups = 8;
	}
}

Bulldog::Bulldog(int no,const char Gender[], double Age, double Weight, double Height, const char pOwner[])
	: Pet(no, "Bulldog", "United Kingdom" , Gender, Age, Weight, Height)
{
	owner = new char[strlen(pOwner) + 1];
	strcpy_s(owner, strlen(pOwner) + 1, pOwner);
	calcCups();
	// Assuming TYPE is a constant string
	const char TYPE[] = "British Bulldog and English bulldog";
	// Allocate memory for type and copy the string
	type = new char[strlen(TYPE) + 1];
	strcpy_s(type, strlen(TYPE) + 1, TYPE);
	lifetime = 9;
}
char Bulldog::getOwner() {
	return *owner;
}
Bulldog::~Bulldog() {
	cout << PetNo << " Bulldog was deleted!!" << endl;
}