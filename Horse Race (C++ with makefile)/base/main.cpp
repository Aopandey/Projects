#include <iostream>
#include <cstdlib>
#include "horse.h"
#include "race.h"
#define horses 5
#define totallength 15

int main()
{
 int seed; // same code as previous  A3 project to ask user for an input 
 std::cout << "Please enter a random number or seed! : ";
 std::cin >> seed;
 srand(seed);
 race race; // initalize the function race
 race.begin(); // calling the function begin to begin the race 
 return(0);
}
