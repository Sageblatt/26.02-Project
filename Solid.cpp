#include "Solid.h"

Solid::Solid() {
    this->YoungsModulus = 0;
}

float Solid::Deformation(float Force, float Radius, float Length) {
    return (Force * Length) / (YoungsModulus * 3.14 * Radius * Radius);
}

float Solid::Heat(float a, float b, float c, float dT) {
    return a * b * c * Density * dT * HeatCapacity;
}

float Solid::GetMass(float Volume) {
    return Volume * Density;
}

void Solid::ChangeDensity(float delta) {
    if(delta > -5 && delta < 5)
        this->Density += delta;
}