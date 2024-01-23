#include <iostream>
#include "SalesPerson.h"
#include "Item.h"
using namespace std;

int main() {
	/*
	//Exercise1
	SalesPerson s1(01, "Kamal");
	Item i1(001, "Carrot");
	Item i2(002, "Pumkin");

	i1.setPrice(2500);
	i2.setPrice(500);
	
	s1.calcSales(i1, i2);
	s1.printSales();
	*/
	
	//Exercise2

	SalesPerson* s1 = new SalesPerson(01, "Kamal");
	Item* i1 = new Item(001, "Carrot");
	Item* i2 = new Item(002, "Pumkin");

	i1->setPrice(2500);
	i2->setPrice(500);

	s1->calcSales(*i1, *i2);
	s1->printSales();

	//we want to manually delete objects in dynamic memory allocation
	delete i2;
	delete i1;
	delete s1;
	return 0;
}