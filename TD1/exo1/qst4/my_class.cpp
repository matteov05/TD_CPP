#include <iostream>
#include "my_class.h"

using namespace std;

my_class::my_class() {
    my_element = "";
}

my_class::my_class(string element) {
    my_element = element;
}

void my_class::print_my_element() {
    cout << my_element << endl;
}