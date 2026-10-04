#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <string>

class my_class {
private:
    std::string my_element;

public:
    my_class();
    my_class(std::string element);

    void print_my_element();
};

#endif