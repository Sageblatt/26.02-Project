#ifndef NEWNONMETAL_H
#define NEWNONMETAL_H

#include "NonMetal.h"

class NewNonMetal: public NonMetal{
public:
    NewNonMetal(float reflect, float youngs, float dens, float heat);
};
#endif
