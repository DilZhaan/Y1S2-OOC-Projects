#include "student.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    Student std1;
    std1.assignDetails(251, "Kamal");
    std1.display();

    Student* std2 = new Student;
    std2->assignDetails(333, "Jagath");
    std2->display();

    delete std2; 

    return 0;
}