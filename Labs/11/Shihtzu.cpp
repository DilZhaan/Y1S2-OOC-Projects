#include "Shihtzu.h"
#include "Pet.h"
#include <cstring>
#include <iostream>
using namespace std;

void Shihtzu::calcCups() {
	if (weight < 2) {
		cups = 2;
	}
	else if (weight < 4) {
		cups = 3;
	}
	else {
		cups = 4;
	}
}
Shihtzu::Shihtzu(int no, const char Gender[], double Age, double Weight, double Height, const char pColor[], const char pImport[]) 
	:Pet(no, "Shih Tzu", "China" , Gender, Age, Weight, Height) {
	color = new char[strlen(pColor) + 1];
	importedFrm = new char[strlen(pImport) + 1];
	strcpy_s(color, strlen(pColor) + 1, pColor);
	strcpy_s(importedFrm, strlen(pImport) + 1, pImport);
	calcCups();
	// Assuming TYPE is a constant string
	const char TYPE[] = "Pets";
	// Allocate memory for type and copy the string
	type = new char[strlen(TYPE) + 1];
	strcpy_s(type, strlen(TYPE) + 1, TYPE);
	lifetime = 14;
}
char Shihtzu::getColor() {
	return *color;
}

char Shihtzu::getImportCountry() {
	return *importedFrm;
}

Shihtzu::~Shihtzu() {
	cout << PetNo << " Shih Tzu was deleted!!" << endl;
}