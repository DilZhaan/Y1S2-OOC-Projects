#include "Item.h"
#include <iostream>
#include <cstring>
using namespace std;

Item::Item(int pItemNo,const char pName[]) {
	itemNo = pItemNo;
	name = new char[strlen(pName) + 1];
	strcpy_s(name, strlen(pName) + 1, pName);
	price = 0; // remove grabage Data
}
void Item::setPrice(double pPrice){
	price = pPrice;
}
double Item:: calcTotal(int qty){
	return qty * price;
}
Item::~Item(){
	delete[] name;
	cout << "Item No : " << itemNo << " deleted." << endl;
}