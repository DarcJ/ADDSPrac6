#include "Mutator.h"
#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include <string>
#include <ctime>
#include <stdlib.h>

class BitFlipProb : public Mutator{
    private:
    double p;
    public:
    BitFlipProb();
    BitFlipProb(double prob);
    Individual mutate(Individual I,int k);
    ~BitFlipProb();

};

#endif