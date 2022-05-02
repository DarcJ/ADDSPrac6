#include "Individual.h"

Individual::Individual(int len)
{
    for (int i = 0; i < len; i++)
    {
        binaryString[i] = '0';
    }
    
}
Individual::Individual(std::string bString){

    binaryString = bString;

}

std::string Individual::getString(){
    return binaryString;

}
int Individual::getBit(int pos){

    if (pos > binaryString.length()) {
		return -1;
	} else {
		return binaryString.at(pos-1) - '0';
	}
    
}
void Individual::flipBit(int pos){
    
    if (pos <= binaryString.length())
    {
        switch (binaryString[pos-1])
        {
        case '0':
            binaryString[pos-1] = '1';
            break;
        case '1':
            binaryString[pos-1] = '0';
            break;
        default:
            break;
        }
    }


}
int Individual::getMaxOnes(){

    int maxCount = 0;

    for (int i = 0; i < binaryString.length(); i++)
    {
        if (binaryString[i] == '1')
        {
            int temp = 1;
            if (i < binaryString.length()-1)
            {
                int j = i+1;
                while (j < binaryString.length() && binaryString[j]== '1')
                {
                    temp++;
                    j++;
                    i++;
                }
                
            }
            
            if (temp > maxCount)
            {
                maxCount = temp;
            }
            
        }
    }
    return maxCount;
}
int Individual::getLength(){

    int length = binaryString.size();

    return length;

}

Individual::~Individual()
{
}
