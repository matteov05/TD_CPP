#ifndef JUMPSEARCH_H
#define JUMPSEARCH_H
#include "SearchingAlgorithm.h"

class JumpSearch : public SearchingAlgorithm {
public:
    int search(std::vector<int> numbers, int target) override;
};

#endif