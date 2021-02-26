#ifndef NEWGAS_H
#define NEWGAS_H

#include "Gas.h"

class NewGas: public Gas{
public:
    NewGas(float dens, float Cv, float Cpp);
};

#endif