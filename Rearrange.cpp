#include "Rearrange.h"

Rearrange::Rearrange()
{
}

std::string Rearrange::mutate(int k, Individual I){

    if (k > I.getLength())
    {
        k = k - I.getLength();
    }

    
    
}

Rearrange::~Rearrange()
{
}
