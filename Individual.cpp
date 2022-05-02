#include "Individual.h"

Individual::Individual(int len)
{
    for (int i = 0; i < len; i++)
    {
        this->binaryString = this->binaryString + "0";
    }
    
}
Individual::Individual(std::string bString){

    this->binaryString = bString;

}

std::string Individual::getString(){
    return binaryString;

}
int Individual::getBit(int pos){

    if ((pos > binaryString.size())||(pos < 0))
    {
        return -1;
    }

    int bValue = (int) (binaryString[pos]);

    return bValue;
    

}
void Individual::flipBit(int pos){

    switch (binaryString[pos])
    {
    case 0:
        binaryString[pos] = 1;
        break;
    case 1:
        binaryString[pos] = 0;
    default:
        break;
    }

}
int Individual::getMaxOnes(){

    int maxCount = 0;

    for (int i = 0; i < binaryString.size(); i++)
    {
        if (binaryString[i] == 1)
        {
            maxCount++;
        }
        else if (binaryString[i] == 0)
        {
            maxCount = 0;
        }
        return maxCount;
   
    }
}
int Individual::getLength(){

    int length = binaryString.size();

    return length;

}

Individual::~Individual()
{
}
