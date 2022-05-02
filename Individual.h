#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <string>

class Individual {
    private:
    std::string binaryString;
    public:
    Individual(int len);
    Individual(std::string bString);
    std::string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
    ~Individual();

};

#endif