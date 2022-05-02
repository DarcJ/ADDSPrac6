#include "BitFlipProb.h"

BitFlipProb::BitFlipProb()
{
}
Individual BitFlipProb::mutate(int p, Individual I){
    
	std::string DNAStrand = I.getString(); 
	Individual offspring(DNAStrand);

	for (int i =1; i < offspring.getLength()+1; i++ ) {
		double randNum = ((double) rand() / (RAND_MAX));
		if(randNum >= p) {
			offspring.flipBit(i); 
		}
	}

	return offspring.getString();
}
BitFlipProb::~BitFlipProb()
{
}