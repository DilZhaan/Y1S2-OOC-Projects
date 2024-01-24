#include "Bulldog.h"
#include "Shihtzu.h"
#include "GermanShepard.h"
#include "GoldenRetriever.h"
#include <iostream>
using namespace std;

int main()
{
	GermanShepard Gs1(1, "Male", 3, 5, 25, "Cage GA");
	GermanShepard Gs2(2, "Female", 5, 8, 38, "Cage GB");
	Bulldog Bd1(3, "Male", 1, 2, 10, "William George");
	GoldenRetriever Gr1(4, "Male", 2, 2, 18, "Toby");
	GoldenRetriever Gr2(5, "Male", 3, 3, 22, "Timmy");
	GoldenRetriever Gr3(6, "Female", 2, 4, 20, "Shina");
	GoldenRetriever Gr4(7, "Female", 3, 5, 21, "Shiba");
	Shihtzu St1(8, "Male", 2, 5, 19, "white", "China");
	Shihtzu St2(9, "Female", 1, 1, 12, "white", "Malaysia");

	double total = Gs1.calcCost(); //+ Gs2.calcCost() + Bd1.calcCost() + Gr1.calcCost() + Gr2.calcCost() + Gr3.calcCost + Gr4.calcCost() + St1.calcCost() + St2.calcCost();
	cout << "Total cost is : Rs: " << total << endl;

	return 0;
}