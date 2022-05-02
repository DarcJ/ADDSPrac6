#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"

class BitFlipProb : public Mutator{
    private:

    public:
    BitFlipProb();
    std::string mutate(int k, Individual I);
    ~BitFlipProb();

};

#endif