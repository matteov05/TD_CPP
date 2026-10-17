#include <iostream>
#include "SearchingAlgorithm.h"

int SearchingAlgorithm::totalComparisons = 0;
int SearchingAlgorithm::totalSearch = 0;
double SearchingAlgorithm::averageComparisons = 0.0;

SearchingAlgorithm::SearchingAlgorithm()
{
    numberComparisons = 0;
}

void SearchingAlgorithm::displaySearchResults(std::ostream& output, int results, int target)
{
    totalComparisons = totalComparisons + numberComparisons;
    totalSearch++;

    averageComparisons = (double)totalComparisons / totalSearch;

    output << "Target: " << target << std::endl;
    output << "Result index: " << results << std::endl;
    output << "Comparisons: " << numberComparisons << std::endl;
    output << "Average comparisons: " << averageComparisons << std::endl;
}
