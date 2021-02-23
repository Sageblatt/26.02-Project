#ifndef MATERIAL_H
#define MATERIAL_H

class Material{
public:
    virtual float GetMass(float Volume) = 0;
    virtual float Heat(float Volume, float dT) = 0;
    virtual void ChangeDensity(float delta) = 0; // Changes density of particular classes' object
protected:
    float Density;
    float MolarHeatCapacity;
};

#endif