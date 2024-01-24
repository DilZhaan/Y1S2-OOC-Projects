#pragma once
class Pet
{
protected:
	int PetNo;
	char* breed;
	char* origin;
	char* type;
	char gender;
	double age;
	double weight;
	double height;
	double lifetime;
	int cups;

	virtual void calcCups() = 0;
public:
	Pet(int Pno, const char Breed[], const char Origin[], const char Gender[], double Age, double Weight, double Height);
	double calcCost();
	void setWeight(double w);
	void setHeight(double h);
	void displayDetails();
	~Pet();
};

