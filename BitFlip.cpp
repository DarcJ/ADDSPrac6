#include "BitFlip.h"

BitFlip::BitFlip()
{
}
Individual BitFlip::mutate(int k, Individual I){
    
    std::string DNAstrand = I.getString();
    Individual offspring(DNAstrand);

    if (k > offspring.getLength())
    {
        k = k - offspring.getLength();
    }

    offspring.flipBit(k);

    return offspring;
}
BitFlip::~BitFlip()
{
}
