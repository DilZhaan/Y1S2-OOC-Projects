#include <iostream>
#include <iomanip>
using namespace std;

struct Circle {
	float radius;
	
	float area() {
		return (22.0 / 7) * radius * radius;
	}
};

struct Rectangle {
	float length;
	float width;

	float area() {
		return length * width;
	}
};

struct Square {
	float length;

	float area() {
		return length * length;
	}
};

void calPerimeter(float length, float width, float& perimeter);
float calFenceCost(float costPerUnit, float perimeter);

int main(void) {
	Circle pond;
	Rectangle land;
	Square building1;
	Rectangle building2;

	float perimeter;

	cout << "Enter the Land Length : ";
	cin >> land.length;

	cout << "Enter the Land Width : ";
	cin >> land.width;
	
	cout << "Enter the Square type Building Length : ";
	cin >> building1.length;

	cout << "Enter the Rectangle type Building Length : ";
	cin >> building2.length;

	cout << "Enter the Rectangle type Building Width : ";
	cin >> building2.width;
	
	cout << "Enter the Pond Radius : ";
	cin >> pond.radius;
	
	float GGArea = land.area() - (building1.area() + building2.area() + pond.area());
	cout << "Grass Grown Area : " << setiosflags(ios::fixed) << setprecision(3) << GGArea << endl;

	calPerimeter(land.length, land.width, perimeter);

	cout << "Total Fence Cost :"
		<< setiosflags(ios::fixed) << setprecision(2) << calFenceCost(10, perimeter) << endl;

	return 0;
}

void calPerimeter(float length, float width, float& perimeter) {
	perimeter = (length + width) * 2;
}

float calFenceCost(float costPerUnit, float perimeter) {
	return costPerUnit * perimeter;
}