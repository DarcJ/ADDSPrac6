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

	for (int j =1; j < offspring.getLength()+1; j++ ) {
		double randNum = ((double) rand() / (RAND_MAX));
		if(randNum >= p) {
			offspring.flipBit(j); 
		}
	}

	return offspring;
}
BitFlipProb::~BitFlipProb()
{
}