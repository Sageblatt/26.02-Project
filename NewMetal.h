#ifndef NEWMETAL_H
#define NEWMETAL_H

#include "Metal.h"

class NewMetal: public Metal{
public:
    NewMetal(float dens, float resist, float heat, float youngs);
};

#endif
