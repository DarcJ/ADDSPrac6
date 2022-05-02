#include "Rearrange.h"

Rearrange::Rearrange()
{
}

Individual Rearrange::mutate(Individual I, int k){

    std::string DNAstrand;
	DNAstrand = I.getString(); 
	std::string front;
	std::string back;
	std::string combinedString;

	if (k > DNAstrand.length()) {
		k = k - DNAstrand.length();
	}

	if (k == DNAstrand.length()) {
		char tail = DNAstrand.back();
		DNAstrand.pop_back();
		combinedString = tail + DNAstrand;
	}

	if (k == 0) {
		combinedString = DNAstrand;
	}
 

	if (k > 0 && k < DNAstrand.length()) {
		
		for (int i = 0; i < k-1; i++) {
			char a = DNAstrand.at(i);
			front.push_back(a);
		}

		for (int i = k-1; i < DNAstrand.length(); i++) {
			char a = DNAstrand.at(i);
			back.push_back(a);
		}

		combinedString = back + front;
	}


	Individual offspring(combinedString);
	
	return offspring;
    
}

Rearrange::~Rearrange()
{
}
