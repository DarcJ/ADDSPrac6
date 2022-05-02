#ifndef BITFLIP_H
#define BITFLIP_H

#include "Mutator.h"

class BitFlip : public Mutator{
    private:

    public:
    BitFlip();
    std::string mutate(int k, Individual I);
    ~BitFlip();

};

#endif