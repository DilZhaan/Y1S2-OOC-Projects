#include "Distance.h"
#include <iostream>
using namespace std;

int main() {
	cout << "-------Exercise 1---------" << endl;
	// Ex1
	Distance dist1;
	dist1.printDistance();

	Distance dist2(11, 6.25);
	dist2.printDistance();

	cout << "-------Exercise 2---------" << endl;
	// Ex2
	Distance* dist3 = new Distance();
	dist3->printDistance();

	Distance* dist4 = new Distance(11, 6.25);
	dist4->printDistance();

	delete dist4;
	delete dist3;

	cout << "-------Exercise 3---------" << endl;
	Distance dist5;
	Distance dist6;
	Distance dist7(11, 6.25);

	dist6.inputDistance();

	dist5.addDistance(dist6, dist7);

	dist5.printDistance();
	dist6.printDistance();
	dist7.printDistance();

	return 0;
}