#pragma once
#include "Pet.h"
class GoldenRetriever :
    public Pet
{
private:
    char* GRName;
    void calcCups();
public:
    GoldenRetriever(int no, const char Gender[], double Age, double Weight, double Height, const char name[]);
    char getName();
    ~GoldenRetriever();
};

