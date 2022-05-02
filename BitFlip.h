#include "Individual.h"
#include "Mutator.h"
#ifndef BITFLIP_H
#define BITFLIP_H

class BitFlip : public Mutator{
    private:

    public:
    BitFlip();
    Individual mutate(Individual I, int k);
    ~BitFlip();

};

#endif