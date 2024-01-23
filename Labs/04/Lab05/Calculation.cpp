#include "Calculation.h"
#include <iostream>

using namespace std;

void calPerimeter(float length, float width, float& perimeter) {
	perimeter = (length + width) * 2;
}

float calFenceCost(float costPerUnit, float perimeter) {
	return costPerUnit * perimeter;
}