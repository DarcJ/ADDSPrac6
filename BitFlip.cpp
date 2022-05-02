#include "BitFlip.h"

BitFlip::BitFlip()
{
}
std::string BitFlip::mutate(int k, Individual I){
    
    if (k > I.getLength())
    {
        k = k - I.getLength();
    }
    
    I.flipBit(k);

    return I.getString();
}
BitFlip::~BitFlip()
{
}
