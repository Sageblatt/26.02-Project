#ifndef METAL_H
#define METAL_H

#include "Solid.h"

class Metal: public Solid{
public:
    Metal();
    float Resistance(float Area, float Length) const; // Resistance of a wire with given length and profile's area
protected:
    float ElectricalResistivity;
};

#endif
