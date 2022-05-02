#ifndef MUTATOR_H
#define MUTATOR_H

#include "Individual.h"
#include <string>

class Mutator {
    private:

    public:
    Mutator();
    virtual Individual mutate(Individual I, int k);
    ~Mutator();

};

#endif