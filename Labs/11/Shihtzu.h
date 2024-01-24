#pragma once
#include "Pet.h"
class Shihtzu :
    public Pet
{
private:
    char* color;
    char* importedFrm;
    void calcCups();
public:
    Shihtzu(int no, const char Gender[], double Age, double Weight, double Height, const char pColor[], const char pImport[]);
    char getColor();
    char getImportCountry();
    ~Shihtzu();
};

