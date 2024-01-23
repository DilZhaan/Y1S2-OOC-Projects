#pragma once
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
