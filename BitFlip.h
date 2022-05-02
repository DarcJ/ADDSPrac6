#ifndef BITFLIP_H
#define BITFLIP_H

#include "Mutator.h"

class BitFlip : public Mutator{
    private:

    public:
    BitFlip();
    Individual mutate(Individual I, int k);
    ~BitFlip();

};

#endif