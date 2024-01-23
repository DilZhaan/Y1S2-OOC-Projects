#include "Circle.h"
double Circle::area() {
	return (22.0 / 7) * radius * radius;
}

void Circle::setRadius(double r) {
	radius = r;
}

void Circle::getRadius() {
	return radius;
}
