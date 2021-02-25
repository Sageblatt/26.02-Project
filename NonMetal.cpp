#include "NonMetal.h"
#include <cmath>

NonMetal::NonMetal() {
    this->RefractiveIndex = 0;
}

float NonMetal::RefractionAngle(float alpha) {
    return asin(sin(alpha) / RefractiveIndex);
}