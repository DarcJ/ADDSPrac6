#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"

BitFlip::BitFlip()
{
}
Individual BitFlip::mutate(Individual I, int k){
    
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
