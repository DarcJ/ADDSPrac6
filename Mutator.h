#ifndef MUTATOR_H
#define MUTATOR_H

#include "Individual.h"
#include <string>

class Mutator {
    private:

    public:
    Mutator();
    std::string mutate(int k, Individual);
    ~Mutator();

};

#endif