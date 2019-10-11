//
// Created by kimem on 2019-10-10.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP
#include "animal.hpp"

class bird: public animal{

protected:
    double locationH;

public:
    bird(){
        this->age = 0;
        this->locationX = 0;
        this->locationY = 0;
        this-> locationH = 0;
        cout << "default constructor for bird"<< endl;

    }
    bird(int age, double x, double y, double h){
        cout << "4 params constructor for bird"<< endl;
    }
    void move(double x, double y, double h) override ;
    bird(const bird& b) : animal(b) {}
    ~bird() override{cout << "destructor for bird" << endl;}

    void sleep() override { cout << "The bird is sleeping"<< endl;}
    void eat() override {cout << "The bird is eating"<< endl;}
    friend ostream& operator<<(ostream& os, const bird& bird);

};
#endif //LAB4_BIRD_HPP
