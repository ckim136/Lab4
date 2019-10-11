//
// Created by kimem on 2019-10-10.
//

#include "bird.hpp"

ostream &operator<<(ostream &os, const bird &bird) {
    os << "bird insertion operator"<< endl;
    return os;
}

void bird::move(double x, double y, double h)  {
    cout << "The bird moved by " << x << ", " << y<< " and " <<h << endl;
    this->setLocationX(x);
    this->setLocationY(y);
    this->setLocationH(h);

}
