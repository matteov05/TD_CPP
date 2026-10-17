#include "JumpSearch.h"

int JumpSearch::search(std::vector<int> numbers, int target)
{
    numberComparisons = 0;

    int step = 2;
    int start = 0;
    int end = 0;
    int size = numbers.size();

    while (end < size){
        numberComparisons++;
        if (numbers[end] >= target){
            break;
        }
        start = end + 1;
        end += step;
    }

    if (end >= size){
        end = size - 1;
    }

    for (int i = start; i <= end; i++){
        numberComparisons++;
        if (numbers[i] == target){
            return i;
        }
        if (numbers[i] > target){
            return -1;
        }
    }
    return -1;
}