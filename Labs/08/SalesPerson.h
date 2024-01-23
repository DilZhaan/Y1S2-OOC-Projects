#pragma once
#include "Item.h"
class SalesPerson
{
private:
	int empNo;
	char* name;
	double sales;
public:
	SalesPerson(int pEmpNo,const char pName[]);
	void calcSales(Item& i1, Item& i2);
	void printSales();
	~SalesPerson();
};

