#ifndef RACE_H_EXISTS
#define HORSE_H_EXISTS
#include <iostream>
#include "horse.h"
#define horses 5

class race {
private:
        horse h[horses];
        int length;
public:
       race();
       int lanes(int whichhorse);
       int begin(); // I had the code written in my main function in A3 so in this project I created a new function to
};
#endif 
// declaration of all the functions that we are going to use in race.cpp 
