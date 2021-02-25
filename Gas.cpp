#include "Gas.h"

float Gas::Heat(float CubeHeight, float dT) {
    return (CubeHeight * CubeHeight * CubeHeight / 22.4) * HeatCapacity * dT;
}

float Gas::HeatP(float CubeHeight, float dT) {
    return (CubeHeight * CubeHeight * CubeHeight / 22.4) * Cp * dT;
}

float Gas::GetMass(float a) {
    return a * a * a * Density;
}

void Gas::ChangeDensity(float delta) {
    if(delta > -0.01 && delta < 0.01)
        this->Density += delta;
}