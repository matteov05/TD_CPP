#include "LinearSearch.h"

int LinearSearch::search(std::vector<int> numbers, int target)
{
    numberComparisons = 0;
    for (int i = 0; i < numbers.size(); i++){
        numberComparisons++;
        if (numbers[i] == target) {
        return i;
        }   
    }
    return -1;
}