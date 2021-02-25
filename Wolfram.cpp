#include "Wolfram.h"
#include <cmath>

Wolfram::Wolfram() {
    this->ElectricalResistivity = 5.5 * pow(10, -8);
    this->YoungsModulus = 415 * pow(10, 9);
    this->HeatCapacity = 150;
    this->Density = 19300;
}