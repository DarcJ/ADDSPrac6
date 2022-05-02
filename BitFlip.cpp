#include "BitFlip.h"

BitFlip::BitFlip()
{
}
std::string BitFlip::mutate(int k, Individual I){
    
    std::string DNAstrand = I.getString();
    Individual offspring(DNAstrand);

    if (k > I.getLength())
    {
        k = k - I.getLength();
    }
    
    offspring.flipBit(k);

    return offspring.getString();
}
BitFlip::~BitFlip()
{
}
