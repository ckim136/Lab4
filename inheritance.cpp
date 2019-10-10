//
// Created by kimem on 2019-10-09.
//

#include "inheritance.hpp"
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

ostream &operator<<(ostream &os, const animal &animal) {
    os << "overloaded << operator"<< endl;
    return os;
}
