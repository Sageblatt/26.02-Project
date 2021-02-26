#include "Fluid.h"

float Fluid::Heat(float Volume, float dT) const{
    return Volume * dT * HeatCapacity;
}

float Fluid::GetMass(float Radius) const {
    return (4 * 3.14 * Radius * Radius * Radius) / 3;
}

float Fluid::Pressure(float Height) const {
    return Density*9.8155*Height;
}

void Fluid::ChangeDensity(float delta) {
    if(delta > -1 && delta < 1)
        this->Density += delta;
}