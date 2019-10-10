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
    }
    canine(int age, double x, double y){}
    void move(double x, double y){
        this->locationX = x;
        this -> locationY = y;
    }
    canine(const canine& c){}
    ~canine(){}
    void sleep() override {cout << "The canine is sleeping"<< endl;}
    void eat() override  {cout << "The canine is eating"<< endl;}
    void hunt(animal* a){
        if (a->getLocationX()- this->locationX  == abs(1)&&
                a->getLocationY() - this->locationY == abs(1)){
            a->setAlive(false);
        }
        if(a->getLifeStatus()){
            cout << "The hunt was not successful"<< endl;
        }else{
            cout << "The hunt was successful" << endl;
        }
    }
friend ostream& operator << (ostream& os, const canine& canine);
};

#endif //LAB4_CANINE_HPP
