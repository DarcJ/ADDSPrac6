#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"

class BitFlipProb : public Mutator{
    private:

    public:
    BitFlipProb();
    Individual mutate(Individual I, int p);
    ~BitFlipProb();

};

#endif