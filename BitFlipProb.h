#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"

class BitFlipProb : public Mutator{
    private:

    public:
    BitFlipProb();
    std::string mutate(int p, Individual I);
    ~BitFlipProb();

};

#endif