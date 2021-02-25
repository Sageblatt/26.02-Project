#include "Glass.h"
#include <cmath>

Glass::Glass() {
    this->YoungsModulus = 70 * pow(10, 9);
    this->HeatCapacity = 670;
    this->Density = 2500;
    this->RefractiveIndex = 1.5;
}