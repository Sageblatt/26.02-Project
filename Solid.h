#ifndef SOLID_H
#define SOLID_H

#include "Material.h"

class Solid: public Material{
public:
    float Heat(float a, float b, float c, float dT); // Heating a parallelepiped with given dimensions
    float Deformation(float Tension); // Longitudinal deformation of a rod with given Tension
private:
    float YoungsModulus;
    float PoissonsRatio;
};

#endif