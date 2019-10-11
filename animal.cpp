//
// Created by kimem on 2019-10-10.
//

#include "animal.hpp"

long animal::counter = 0;

ostream &operator<<(ostream &os, const animal &a) {
    os << "animal insertion operator" << endl;
    return os;
}

void animal::move(double x, double y, double h) {
    cout << "The animal moved by " <<x<<", " <<y <<endl;
    this->setLocationX(x);
    this->setLocationY(y);
    this->setLocationY(h);
}





