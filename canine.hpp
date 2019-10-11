//
// Created by kimem on 2019-10-10.
//

#ifndef LAB4_CANINE_HPP
#define LAB4_CANINE_HPP

#include "animal.hpp"

class canine: public animal{
public:
    canine(){
        this->age= 0;
        this -> locationX = 0;
        this -> locationY = 0;
        cout << "default constructor for canine "<< endl;
    }
    canine(int age, double x, double y){
        cout << "3 params constructor for canine"<< endl;
    }
    void move(double x, double y, double h = 0) override;
    canine(const canine& c) : animal(c) {
        cout << "copy constructor for canine" << endl;
    }
    ~canine() override{cout << "destructor for canine" << endl;}
    void sleep() override {cout << "The canine is sleeping"<< endl;}
    void eat() override  {cout << "The canine is eating"<< endl;}
    void hunt(animal* a);
friend ostream& operator << (ostream& os, const canine& canine);
};

#endif //LAB4_CANINE_HPP
