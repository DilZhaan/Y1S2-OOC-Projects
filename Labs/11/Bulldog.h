#pragma once
#include "Pet.h"
class Bulldog :
    public Pet
{
private:
    char* owner;
    void calcCups();
public:
    Bulldog(int no, const char Gender[], double Age, double Weight, double Height, const char pOwner[]);
    char getOwner();
    ~Bulldog();
};

