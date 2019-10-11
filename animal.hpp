//
// Created by kimem on 2019-10-10.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP
#include <iostream>

using  namespace std;
// Animal base class
class animal{
protected:
    long id;
    int age;
    bool life;
    double locationX;
    double locationY;
    double locationH;

public:
 static long counter;
    animal(){
        id = counter++;
        this->life = true;
        this -> age = 0;
        this -> locationX  = 0.0;
        this -> locationY = 0.0;
        this ->locationH = 0.0;
        cout << "default constructor for animal" <<endl;
       // cout << "default constructor for animal id: "<< this->id<<  endl;

    }

    animal(int age, double locationX, double locationY){
      life = true;
        this -> age = age;
        this -> locationX  = locationX;
        this -> locationY = locationY;
        cout << "3 param constructor for animal" << endl;
    }

    virtual void move(double x, double y, double h = 0);


    animal(const animal& a){
        cout << "copy constructor for animal" << endl;
    }
    virtual ~animal(){cout << "destructor for canine" << endl;}
    virtual void eat(){cout << "The animal is eating"<< endl;}
    virtual void sleep(){cout << "The animal is sleeping"<< endl;}

    void setAlive(bool life){this->life = life;}

    friend ostream& operator<<(ostream& os, const animal& a);

    double getLocationX(){return locationX;}
    double getLocationY(){return locationY;}
    double getLocationH(){return locationH;}
    void setLocationX(double x) {this->locationX = x;}
    void setLocationY(double y) {this->locationY = y;}
    void setLocationH(double h){this->locationH = h;}
    bool getLifeStatus(){return life;}



};

#endif //LAB4_ANIMAL_HPP
