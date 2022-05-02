#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

#include <iostream>
#include <string>

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) { 
	Individual * offspring = new Individual(1);
	*offspring = mPtr->mutate(k, *indPtr);
	
	return offspring;

}

int main()
{

    std::string binarystr1;
    std::string binarystr2;
    int k1;
    int k2;

    //std::cout << "Please enter strings and integers" << std::endl;
    std::cin >> binarystr1 >> k1 >> binarystr2 >> k2;

    Individual * I1 = new Individual(binarystr1);
    Individual * I2 = new Individual(binarystr2);
    Mutator * BFlip = new BitFlip();
    Mutator * R = new Rearrange();

    Individual * offspring1 = new Individual(1);
    Individual * offspring2 = new Individual(1);

    offspring1 = execute(I1, BFlip, k1);
    offspring2 = execute(I2, R, k2);

    std::cout << offspring1->getString() << " " << offspring2->getString() << " " << offspring2->getMaxOnes() << std::endl;

}
