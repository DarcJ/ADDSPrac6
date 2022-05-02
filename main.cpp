#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

#include <iostream>
#include <cstring>

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) { 
	Individual * offspring = new Individual(1);
	*offspring = mPtr->mutate(*indPtr, k);
	
	return offspring;

}

int main()
{

    string binarystr1;
    string binarystr2;
    int k1;
    int k2;

    cout << "Please Enter Values: " ;

    cin >> binarystr1;
    cin >> k1; 
    cin >> binarystr2;
    cin >> k2;

    Individual * I1 = new Individual(binarystr1);
    Individual * I2 = new Individual(binarystr2);
    Mutator * bitflip = new BitFlip();
    Mutator * rearrange = new Rearrange();

    Individual * offspring1 = new Individual(1);
    Individual * offspring2 = new Individual(1);

    offspring1 = execute(I1, bitflip, k1);
    offspring2 = execute(I2, rearrange, k2);

    cout << offspring1->getString() << " " << offspring2->getString() << " " << offspring2->getMaxOnes() << endl;
    cout << offspring1->getBit(2) << endl;

    return 0;

}
