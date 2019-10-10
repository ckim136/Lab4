//
// Created by kimem on 2019-10-10.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP
#include <iostream>

using  namespace std;

class animal{
public:

    int age;
    static long ID;
    bool life;
    double locationX;
    double locationY;
    animal(){
        this->life = true;
        this -> age = 0;
        this -> locationX  = 0.0;
        this -> locationY = 0.0;

    }
    animal(int age, double locationX, double locationY){
        this -> life = true;
        this -> age = age;
        this -> locationX  = locationX;
        this -> locationY = locationY;

    }

    virtual void move(double x, double y){
        this ->locationX = x;
        this -> locationY = y;
    }
    animal(const animal& a){}

    virtual ~animal(){}
    virtual void eat(){cout << "The animal is eating"<< endl;}
    virtual void sleep(){cout << "The animal is sleeping"<< endl;}
    void setAlive(bool life){this->life = life;}
    friend ostream&operator<< (ostream& os, const animal& animal);





};
#endif //LAB4_ANIMAL_HPP
