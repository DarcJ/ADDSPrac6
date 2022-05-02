#include "Mutator.h"
#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H


class BitFlipProb : public Mutator{
    private:

    public:
    BitFlipProb();
    Individual mutate(Individual I, double p);
    ~BitFlipProb();

};

#endif