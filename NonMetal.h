#ifndef NONMETAL_H
#define NONMETAL_H

#include "Solid.h"

class NonMetal: public Solid{
public:
    float RefractionAngle(float alpha); // Snell's law with given angle of incidence
private:
    float RefractiveIndex; // n of air is 1 in this program
};

#endif
