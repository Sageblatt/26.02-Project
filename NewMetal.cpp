#include "NewMetal.h"

NewMetal::NewMetal(float dens, float resist, float heat, float youngs) {
    this->Density = dens;
    this->HeatCapacity = heat;
    this->YoungsModulus = youngs;
    this->ElectricalResistivity = resist;
}