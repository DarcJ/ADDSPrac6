#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"

class BitFlipProb : public Mutator{
    private:

    public:
    BitFlipProb();
    Individual mutate(int p, Individual I);
    ~BitFlipProb();

};

#endif