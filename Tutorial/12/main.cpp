#include <iostream>
#include "Employee.h"
int main() {
 //Create a dynamic object of the Employee class.
 Employee* emp0 = new Employee(1003, "Tharindu", "General Manager", 75000);
 emp0->display();
 
 // Don't change the code below
 AcademicStaff *emp1;
 emp1 = new AcademicStaff(1001, "Kusal", "Lecturer", 100000, 25000);
 NonAcademic emp2(1002, "Janith", "Manager", 60000, 2500, 20);
 emp1->display();
 emp1->calcNetSalary();
 emp2.display();
 emp2.calcNetSalary();
}
