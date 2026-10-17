#include "BinarySearch.h"

int BinarySearch::search(std::vector<int> numbers, int target)
{
    numberComparisons = 0;

    int left = 0;
    int right = numbers.size() - 1;
    int mid;

    while (left <= right){
        mid = (left + right) / 2;
        numberComparisons++;

        if (numbers[mid] == target){
            return mid;
        }

        if (numbers[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}