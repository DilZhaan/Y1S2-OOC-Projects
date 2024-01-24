#include "GermanShepard.h"
#include "Pet.h"
#include <cstring>
#include <iostream>
using namespace std;

void GermanShepard::calcCups() {
	if (weight < 4) {
		cups = 4;
	}
	else if (weight < 7) {
		cups = 5;
	}
	else {
		cups = 6;
	}
}

GermanShepard::GermanShepard(int no, const char Gender[], double Age, double Weight, double Height, const char pCage[])
	:Pet(no, "German Shepard", "Germany", Gender, Age, Weight, Height)
{
    int typelen = strlen("Working Dogs");

    // Allocate memory for cage and copy the string
    cage = new char[strlen(pCage) + 1];
    strcpy_s(cage, strlen(pCage) + 1, pCage);

    // Calculate cups
    calcCups();

    // Assuming TYPE is a constant string
    const char TYPE[] = "Working Dogs";
    // Allocate memory for type and copy the string
    type = new char[strlen(TYPE) + 1];
    strcpy_s(type, strlen(TYPE) + 1, TYPE);

    lifetime = 10.5;
}
void GermanShepard::changeCage(const char changedCage[]) {	
	strcpy_s(cage, strlen(changedCage) + 1, changedCage);
}
char* GermanShepard::trackGS(int code) {
	return cage;
}
GermanShepard::~GermanShepard() {
	cout << PetNo << " German Shepard was deleted!!" << endl;
}