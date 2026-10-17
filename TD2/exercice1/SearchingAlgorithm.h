#ifndef SEARCHINGALGORITHM_H
#define SEARCHINGALGORITHM_H
#include <iostream>
#include <vector>

class SearchingAlgorithm {

public:
    int numberComparisons;
    static int totalComparisons;
    static int totalSearch;
    static double averageComparisons;

    SearchingAlgorithm();
    virtual int search(std::vector<int> numbers, int target) = 0;
    void displaySearchResults(std::ostream& output, int results, int target);

private :


};


#endif 