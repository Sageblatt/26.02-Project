#ifndef METAL_H
#define METAL_H

#include "Solid.h"

class Metal: public Solid{
public:
    float Resistance(float S, float length); // Resistance of a wire with given length and profile's area
private:
    float ElectricalResistivity;
};

#endif
