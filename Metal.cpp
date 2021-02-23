#include "Metal.h"

Metal::Metal() {
    this->ElectricalResistivity = 0;
}

float Metal::Resistance(float Area, float Length) {
    return ((ElectricalResistivity * Length) / Area);
}
