#ifndef GAS_H
#define GAS_H

#include "Material.h"

class Gas: public Material{
public:
    Gas();
    float Heat(float CubeHeight, float dT) const override; // Heating a cube with edge CubeHeight of gas for dT with V=const
    float HeatP(float CubeHeight, float dT) const; // Heating with P=const
    float GetMass(float a) const override; // Mass of cube with given height
    void ChangeDensity(float delta) override; // Changes density no more than |0.01|
protected:
    float Cp;
};

#endif
