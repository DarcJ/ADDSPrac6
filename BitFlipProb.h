#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"

class BitFlipProb : public Mutator{
    private:

    public:
    BitFlipProb();
    Individual mutate( ndividual I, int p);
    ~BitFlipProb();

};

#endif