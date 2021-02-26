#include "NonMetal.h"
#include <cmath>

NonMetal::NonMetal() {
    this->RefractiveIndex = 0;
}

float NonMetal::RefractionAngle(float alpha) const {
    return asin(sin(alpha) / RefractiveIndex);
}