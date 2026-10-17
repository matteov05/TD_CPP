#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H
#include "SearchingAlgorithm.h"

class LinearSearch : public SearchingAlgorithm {
public:
    int search(std::vector<int> numbers, int target) override;
};

#endif