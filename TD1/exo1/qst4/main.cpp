#include <iostream>
#include "my_class.h"

using namespace std;

int main() {
    my_class objet1;
    my_class objet2("Hello World!");

    objet1.print_my_element();
    objet2.print_my_element();

    return 0;
}