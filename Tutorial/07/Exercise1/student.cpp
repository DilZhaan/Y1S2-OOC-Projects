#include "student.h"
#include <iostream>
#include <cstring>
using namespace std;

void Student::assignDetails(int id,const char* Name) {
    studentID = id;
    name = new char[strlen(Name)+1];
    strcpy(name, Name);
}

void Student::display() {
    cout << "Student ID is " << studentID << endl;
    cout << "Student Name is " << name << endl;
}