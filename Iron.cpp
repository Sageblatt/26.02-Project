#include "Iron.h"
#include <cmath>

Iron::Iron() {
    this->Density = 7874;
    this->HeatCapacity = 460;
    this->YoungsModulus = 2.17 * pow(10, -5);
    this->ElectricalResistivity = pow(10, -7);
}
