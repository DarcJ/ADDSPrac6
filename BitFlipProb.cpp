#include "BitFlipProb.h"

BitFlipProb::BitFlipProb()
{
}
std::string BitFlipProb::mutate(int k, Individual I){
    
    if (k > I.getLength())
    {
        k = k - I.getLength();
    }
    
    I.flipBit(k);

    return I.getString();
}
BitFlipProb::~BitFlipProb()
{
}