#pragma once
#include "Pet.h"
class GermanShepard :
    public Pet
{
private:
    char* cage;
    void calcCups();
public:
    GermanShepard(int no, const char Gender[], double Age, double Weight, double Height, const char pCage[]);
    void changeCage(const char changedCage[]);
    char* trackGS(int code);
    ~GermanShepard();
};

