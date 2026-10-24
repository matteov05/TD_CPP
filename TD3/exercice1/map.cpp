#include <iostream>
#include <map>
#include <vector>

using namespace std;

void countFrequencyBruteForce(const vector<int>& numbers) {
    for (int i = 0; i < numbers.size(); ++i) {
        bool found = false;
        for (int j = 0; j < i; ++j) {
            if (numbers[i] == numbers[j]) {
                found = true;
                break;
            }
        }
        if (found) continue;
            int count = 0;
            for (int j = 0; j < numbers.size(); ++j) {
                if (numbers[i] == numbers[j]) {
                    count++;
                }
            }
            cout << numbers[i] << ": " << count << " times" << endl;
        
    }
}

map<int, int> countFrequencyOptimal(const vector<int>& numbers) {
    map<int, int> frequencies;

    for (int number : numbers) {
        ++frequencies[number];
    }
    return frequencies;
}

int main(){
    vector<int> numbers = {1, 2, 3, 2, 4, 1, 5, 5, 6};

    //test countFrequencyBruteForce
    cout << "Frequency (Brute Force):" << endl;
    countFrequencyBruteForce(numbers);

    //test countFrequencyOptimal
    cout << "\nFrequency(Optimal):" << endl;
    map<int, int> frequencyMapOptimal = countFrequencyOptimal(numbers);
    for (const auto& entry : frequencyMapOptimal) {
        cout << entry.first << ": " << entry.second << " times" << endl;
    }
    return 0;
}