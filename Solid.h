#ifndef SOLID_H
#define SOLID_H

#include "Material.h"

class Solid: public Material{
public:
    Solid();
    float Heat(float a, float b, float c, float dT); // Heating a parallelepiped with given dimensions
    float Deformation(float Force, float Radius, float Length); // Longitudinal deformation of a rod with given Tension
    void ChangeDensity(float delta) override; // Changes no more than 5
    float GetMass(float Volume) override;
protected:
    float YoungsModulus;
};

#endif