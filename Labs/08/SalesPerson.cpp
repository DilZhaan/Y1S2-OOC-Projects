#include "SalesPerson.h"
#include "Item.h"
#include <iostream>
#include <cstring>
using namespace std;

SalesPerson::SalesPerson(int pEmpNo, const char pName[]) {
	empNo = pEmpNo;
	name = new char[strlen(pName) + 1];
	strcpy_s(name, strlen(pName) + 1, pName);
	sales = 0;
}
void SalesPerson::calcSales(Item& i1, Item& i2) {
	sales = i1.calcTotal(1) + i2.calcTotal(1);
}

void SalesPerson::printSales() {
	cout <<
		"Sales Person No\t\t: " << empNo <<
		"\nSales Person Name\t: " << name <<
		"\nSales Done by " << name << "\t: " << sales << endl;
}
SalesPerson::~SalesPerson() {
	delete[] name;
	cout << "emp No : " << empNo << " deleted." << endl;
}