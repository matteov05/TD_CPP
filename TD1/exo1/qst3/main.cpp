#include <iostream>
using namespace std;

string message = "Hello World!";

void fonction(string msg) {
    cout << msg << endl;
}

int main() {
    fonction(message);
    return 0;
}