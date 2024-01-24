#include "Pet.h"
#include <cstring>
#include <iostream>
using namespace std;

Pet::Pet(int Pno, const char Breed[], const char Origin[], const char Gender[], double Age, double Weight, double Height) {
	PetNo = Pno;
	breed = new char[strlen(Breed) + 1];
	origin = new char[strlen(Origin) + 1];
	strcpy_s(breed, strlen(Breed) + 1, Breed);
	strcpy_s(origin, strlen(Origin) + 1, Origin);
	gender = (Gender == "Male" || Gender == "male") ? 'M' : 'F';
	age = Age;
	weight = Weight;
	height = Height;
	cups = 0;
	type = nullptr;
	lifetime = 0;
}
double Pet::calcCost() {
	double cost = cups * 100.00 * 7;
	cout << "Weekly cost of Pedigree dog food (for " << PetNo << ") : Rs." << cost << endl;
	return cost;
}
void Pet::setWeight(double w) {
	weight = w;
}
void Pet::setHeight(double h) {
	height = h;
}
void Pet::displayDetails() {
	cout << "Pet No : " << PetNo << endl <<
		"Breed : " << breed << endl <<
		"Origin : " << origin << endl <<
		"Called as a : " << type << endl <<
		"Gender : " << gender << endl <<
		"Age : " << age << endl <<
		"Weight : " << weight << endl <<
		"Height : " << height << endl <<
		"Life Time : " << lifetime << endl <<
		"Pedigree dog food cups are given : " << cups << endl;
}
Pet::~Pet() {
	cout << PetNo << " Pet was deleted!!" << endl;
}