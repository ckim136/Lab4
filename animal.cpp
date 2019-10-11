//
// Created by kimem on 2019-10-10.
//

#include "animal.hpp"

ostream &operator<<(ostream &os, const animal &animal) {
    os << "overloaded << operator"<< endl;
    return os;
}
char animal::counter = 'A';




