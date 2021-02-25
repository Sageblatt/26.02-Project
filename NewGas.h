#ifndef NEWGAS_H
#define NEWGAS_H

#include "Gas.h"

class NewGas: public Gas{
    NewGas(float dens, float Cv, float Cpp);
};

#endif