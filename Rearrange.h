#ifndef REARRANGE_H
#define REARRANGE_H

#include "Mutator.h"

class Rearrange: public Mutator{
    private:

    public:
    Rearrange();
    Individual mutate(int k, Individual I);
    ~Rearrange();

};

#endif