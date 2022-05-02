#include "BitFlipProb.h"

#include <string>
#include <ctime>
#include <stdlib.h>

BitFlipProb::BitFlipProb()
{
    srand (time(NULL));
    p = ((double)rand() / (RAND_MAX));
}

BitFlipProb::BitFlipProb(double prob){
    prob = p;
}

Individual BitFlipProb::mutate(Individual I, int k){
    
	std::string DNAStrand = I.getString(); 
	Individual offspring(DNAStrand);

	for (int i =1; i < offspring.getLength()+1; i++ ) {
		double randNum = ((double) rand() / (RAND_MAX));
		if(randNum >= p) {
			offspring.flipBit(i); 
		}
	}

	return offspring;
}
BitFlipProb::~BitFlipProb()
{
}