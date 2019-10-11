//
// Created by kimem on 2019-10-09.
//

#include "inheritance.hpp"
#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

int main() {

animal * a = new animal;
animal * b = new bird;
animal * c = new canine;
cout << endl;


a->move(500, 300);
b->move(500, 300, 100 );
c-> move(501, 299);

cout << endl;

cout << "The canine is hunting bird" <<endl;
((canine*)c)->hunt(b); //fail

cout << endl;

cout << "The canine is hunting animal" <<endl;
((canine*)c)->hunt(a); //success

cout <<endl;

a->eat();
b->eat();
c->eat();
cout <<endl;

a->sleep();
b->sleep();
c->sleep();
cout <<endl;

return 0;
}


