#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

#include <iostream>
#include <string>

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

    cin >> binarystr1;
    cin >> k1; 
    cin >> binarystr2;
    cin >> k2;

    BitFlip bitflip;
    Mutator * bfptr;
    bfptr = &bitflip;

    Rearrange rearrange;
    Mutator * rptr;
    rptr = &rearrange;

    Individual I1(binarystr1);
    Individual * ptr1 = &I1;

    Individual I2(binarystr2);
    Individual * ptr2 = &I2;

    Individual * offspring1 = execute(ptr1, bfptr, k1);
    Individual * offspring2 = execute(ptr2, rptr, k2);

    string mutation1 = offspring1->getString();
    string mutation2 = offspring2->getString();
    int i = offspring2->getMaxOnes();

    cout << mutation1 << " " << mutation2 << " " << i << endl;

    return 0;

}
