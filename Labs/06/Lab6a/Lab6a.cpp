#include <iostream>
#include <iomanip>
#include "Circle.h"
#include "RectangleX.h"
using namespace std;

struct Square {
	double length;

	double area() {
		return length * length;
	}
};

void calPerimeter(double length, double width, double& perimeter);
double calFenceCost(double costPerUnit, double perimeter);

int main(void) {
	Circle pond;
	RectangleX land;
	Square building1;
	RectangleX building2;

	double input;
	double perimeter;

	cout << "Enter the Land Length : ";
	cin >> input;
	land.setLength(input);

	cout << "Enter the Land Width : ";
	cin >> input;
	land.setWidth(input);

	cout << "Enter the Square type Building Length : ";
	cin >> building1.length;

	cout << "Enter the Rectangle type Building Length : ";
	cin >> input;
	building2.setLength(input);

	cout << "Enter the Rectangle type Building Width : ";
	cin >> input;
	building2.setWidth(input);

	cout << "Enter the Pond Radius : ";
	cin >> input;
	pond.setRadius(input);

	double GGArea = land.area() - (building1.area() + building2.area() + pond.area());
	cout << "Grass Grown Area : " << setiosflags(ios::fixed) << setprecision(3) << GGArea << endl;

	calPerimeter(land.getLength(), land.getWidth(), perimeter);

	cout << "Total Fence Cost :"
		<< setiosflags(ios::fixed) << setprecision(2) << calFenceCost(10, perimeter) << endl;

	return 0;
}

void calPerimeter(double length, double width, double& perimeter) {
	perimeter = (length + width) * 2;
}

double calFenceCost(double costPerUnit, double perimeter) {
	return costPerUnit * perimeter;
}