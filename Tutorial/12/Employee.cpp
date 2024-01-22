#include "Employee.h"
#include <iostream>
#include <cstring>
using namespace std;
//================Employee Class=================================
//Constructor
Employee::Employee(int pempNo, char pname[], char pdesignation[], double pbasicSalary){
    empNo = pempNo;
    name = new char[strlen(pname)+1];
    strcpy(name,pname);
    designation = new char[strlen(pdesignation)+1];
    strcpy(designation,pdesignation);
    basicSalary = pbasicSalary;
}
//Methods of Employee Class
void Employee::display(){
    cout << "Employee ID : " << empNo << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Employee Designation : " << designation << endl;
    cout << "Employee Basic Salary : " << basicSalary << endl;
}
//===================AcademicStaff Class===================================
AcademicStaff::AcademicStaff(int pempNo, char pname[], char pdesignation[], double pbasicSalary, double pallowance):Employee(pempNo, pname, pdesignation, pbasicSalary){
    allowance = pallowance; 
}
//Methods of the AcademicStaff
void AcademicStaff:: display(){
    Employee::display(); // This calls the display() method of the base class to display the properties of the base class. 
    //Rest of the implementation
    cout << "Employee Allowance : " << allowance << endl;
}
//==========================NonAcademic Class==========================
NonAcademic::NonAcademic(int pempNo, char pname[], char pdesignation[], double pbasicSalary,double potRate, float potHours):Employee(pempNo, pname, pdesignation, pbasicSalary){
    // rest of the implementation
    otRate = potRate;
    otHours = potHours;
}
//Methods of the NonAcademic Class
void NonAcademic::display(){
    Employee::display();
    cout << "Employee OT Rate : " << otRate << endl;
    cout << "Employee OT Hours : " << otHours <<endl;
}

double AcademicStaff::calcNetSalary(){
    cout << "Net Salary : " << basicSalary + allowance << endl;
}
double NonAcademic::calcNetSalary(){
    cout << "Net Salary : " << basicSalary + (otHours * otRate) << endl;
}