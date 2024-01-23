#include "RectangleX.h"
double RectangleX::area() {
	return length * width;
}

void RectangleX::setLength(double len) {
	length = len;
}

void RectangleX::setWidth(double wth) {
	width = wth;
}

double RectangleX::getLength() {
	return length;
}
double RectangleX::getWidth() {
	return width;
}