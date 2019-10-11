//
// Created by kimem on 2019-10-10.
//

#include "canine.hpp"


ostream &operator<<(ostream &os, const canine &canine) {
    os<< "canine insertion operator"<< endl;
    return os;
}

void canine::hunt(animal *a) {
    if (abs(a->getLocationX() - this->getLocationX()) <= 1 &&
        abs(a->getLocationY() - this->getLocationY()) <=1 &&
        a->getLocationH() <= 1){
        a->setAlive(false);
    }

    if (a->getLifeStatus()) {
        cout << "The hunt was not successful" << endl;
    } else {
        cout << "The hunt was successful" << endl;
    }
}

void canine::move(double x, double y, double h) {
    cout << "The canine moved by " <<x<<", " <<y <<endl;
    this->setLocationX(x);
    this->setLocationY(y);
    this->setLocationY(h);

}


