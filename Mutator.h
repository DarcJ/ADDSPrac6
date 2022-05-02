#include "Individual.h"

#ifndef MUTATOR_H
#define MUTATOR_H

#include <string>

class Mutator {
    private:

    public:
    virtual Individual mutate(Individual I, int k)=0;

};

#endif