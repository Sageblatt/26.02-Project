#include "Ice.h"
#include <cmath>

Ice::Ice() {
    this->RefractiveIndex = 1.31;
    this->Density = 900;
    this->HeatCapacity = 2110;
    this->YoungsModulus = 3 * pow(10, 9);
}
