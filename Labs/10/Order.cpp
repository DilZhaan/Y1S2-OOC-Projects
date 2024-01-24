#include "Order.h"
#include <iostream>
#include <cstring>
using namespace std;

Order::Order(int no, int size)
{
	orderNo = no;
	maxSize = size;
	meals = new Meal[size];
	count = 0;
}
void Order::addItem(int no,const char name[], double pPrice)
{
	if (count < maxSize)
	{
		meals[count].setDetails(no, name);
		meals[count].setPrice(pPrice);
		count++;
	}
	else {
		cout << "Cannot enter anymore items " << endl;
	}
}

void Order::calTotPrice() {
	double total = 0;
	for (int i = 0; i < maxSize; i++) {
		total += meals[i].getPrice();
	}
	cout << "Total Price of Order " << orderNo << " : " << total << endl;
}
Order::~Order() {
	cout << orderNo << " Order has been deleted!" << endl;
}


Meal::Meal() {
	mealNo = 0;
	Description = nullptr;
	price = 0;
}
void Meal::setDetails(int no, const char pDesc[]) {
	mealNo = no;
	Description = new char[strlen(pDesc) + 1];
	strcpy_s(Description, strlen(pDesc) + 1 , pDesc);
}
void Meal::setPrice(double pPrice) {
	price = pPrice;
}
double Meal::getPrice() {
	return price;
}