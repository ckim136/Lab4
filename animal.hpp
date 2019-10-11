//
// Created by kimem on 2019-10-10.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP
#include <iostream>

using  namespace std;


class animal{
protected:
    char id;
    int age;
    bool life;
    double locationX;
    double locationY;
public:
 static char counter;
    animal(){
        id = counter++;
        this->life = true;
        this -> age = 0;
        this -> locationX  = 0.0;
        this -> locationY = 0.0;
        cout << "default constructor for animal"<< endl;

    }

    animal(int age, double locationX, double locationY){
        this -> life = true;
        this -> age = age;
        this -> locationX  = locationX;
        this -> locationY = locationY;
        cout << "3 param constructor for animal" << endl;

    }

    virtual void move(double x, double y){

        this ->locationX = x;
        this -> locationY = y;
        cout << "The animal moved by " << x << " and " << y<< endl;
    }
    animal(const animal& a){
        cout << "copy constructor for animal" << endl;
    }

    virtual ~animal(){
        cout << "destructor for animal" << endl;
    }
    virtual void eat(){cout << "The animal is eating"<< endl;}
    virtual void sleep(){cout << "The animal is sleeping"<< endl;}
    void setAlive(bool life){this->life = life;}
    friend ostream&operator<< (ostream& os, const animal& animal);

    double getLocationX(){return locationX;}
    double getLocationY(){return locationY;}
    bool getLifeStatus(){return life;}



};
#endif //LAB4_ANIMAL_HPP
