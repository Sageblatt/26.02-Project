#include "NewNonMetal.h"

NewNonMetal::NewNonMetal(float reflect, float youngs, float dens, float heat) {
    this->YoungsModulus = youngs;
    this->HeatCapacity = heat;
    this->Density = dens;
    this->RefractiveIndex = reflect;
}