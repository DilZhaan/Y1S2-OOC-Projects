#pragma once
class Meal{
private:
	int mealNo;
	char* Description;
	double price;
public:
	Meal();
	void setDetails(int no, const char pDesc[]);
	void setPrice(double pPrice);
	double getPrice();
};
class Order
{
private:
	int orderNo;
	Meal* meals;
	int count;
	int maxSize;
public:
	Order(int pID, int size);
	void addItem(int no, const char name[], double pPrice);
	void calTotPrice();
	~Order();
};