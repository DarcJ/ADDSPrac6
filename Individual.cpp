#include "Individual.h"

Individual::Individual()
{
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

}
int Individual::getMaxOnes(){

}
int Individual::getLength(){

}

Individual::~Individual()
{
}
