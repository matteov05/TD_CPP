#include <iostream>
#include <vector>
#include <algorithm>

#include "LinearSearch.h"
#include "JumpSearch.h"
#include "BinarySearch.h"

using namespace std;

int main()
{
    vector<int> numbers = {30, 10, 50, 20, 40, 70, 60};
    int target = 70;

    // Trier le vecteur
    sort(numbers.begin(), numbers.end());

    LinearSearch linear;
    JumpSearch jump;
    BinarySearch binary;

    // Linear Search
    int result = linear.search(numbers, target);
    linear.displaySearchResults(cout, result, target);

    cout << endl;

    // Jump Search
    result = jump.search(numbers, target);
    jump.displaySearchResults(cout, result, target);

    cout << endl;

    // Binary Search
    result = binary.search(numbers, target);
    binary.displaySearchResults(cout, result, target);

    return 0;
}
