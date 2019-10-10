//
// Created by kimem on 2019-10-10.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP
#include "animal.hpp"

class bird: public animal{
protected:
    double heightCoordinate;
public:
    bird(){
        this->age = 0;
        this->locationX = 0;
        this->locationY = 0;
        this-> heightCoordinate = 0;

    }
    bird(int age, double x, double y, double h){}
    void move(double x, double y, double h){
        this->locationX = x;
        this-> locationY = y;
        this -> heightCoordinate = h;
    }
    bird(const bird& b){}
    ~bird(){}
    void sleep() override { cout << "The bird is sleeping"<< endl;}
    void eat() override {cout << "The bird is eating"<< endl;}
    friend ostream&operator<< (ostream& os, const bird& bird);

};
#endif //LAB4_BIRD_HPP
