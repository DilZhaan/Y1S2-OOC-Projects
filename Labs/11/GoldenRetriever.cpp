#include "GoldenRetriever.h"
#include "Pet.h"
#include <cstring>
#include <iostream>
using namespace std;

void GoldenRetriever::calcCups() {
	if (weight < 3) {
		cups = 3;
	}
	else if (weight < 6) {
		cups = 4;
	}
	else {
		cups = 5;
	}
}

GoldenRetriever:: GoldenRetriever(int no, const char Gender[], double Age, double Weight, double Height, const char name[])
	:Pet(no, "Golden Retriever", "United Kingdom" , Gender, Age, Weight, Height) {
	GRName = new char[strlen(name) + 1];
	strcpy_s(GRName, strlen(name) + 1, name);
	calcCups();
	// Assuming TYPE is a constant string
	const char TYPE[] = "Guide Dogs";
	// Allocate memory for type and copy the string
	type = new char[strlen(TYPE) + 1];
	strcpy_s(type, strlen(TYPE) + 1, TYPE);
	lifetime = 12;
}
char GoldenRetriever::getName() {
	return *GRName;
}
GoldenRetriever::~GoldenRetriever() {
	cout << PetNo << " Golden Retriever was deleted!!" << endl;
}
