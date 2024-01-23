#include "Distance.h"
#include <iostream>
using namespace std;

Distance::Distance() {
	feet = inches = 0;
}

Distance::Distance(int ft, float in) {
	feet = ft;
	inches = in;
}

void Distance::inputDistance() {
	cout << "Feets : ";
	cin >> feet;

	cout << "Inches : ";
	cin >> inches;
}

void Distance::printDistance() {
	cout << feet << " Feets and " << inches << " Inches." << endl;
}

Distance::~Distance() {
	cout << "Distance deleted" << endl;
}

//Ex3
void Distance::addDistance(Distance& d2, Distance& d3) {
	inches = d2.inches + d3.inches;
	while (inches / 12 >= 1) {
		feet++;
		inches -= 12.0;
	}
	feet += d2.feet + d3.feet;
}