#include <iostream>
#include <cstdlib>
#include "horse.h"
#include "race.h"
#define horses 5
#define totallength 15

race::race() {
race::length = totallength;
}
int race::lanes(int whichhorse) {  // exact same code from previous project i.e A3

for(int i=0; i < length; i++){ // for loop to go throgh the total distance which the horses will travel
  int currenthorseposition = h[whichhorse].horseposition();
  if (i == currenthorseposition) 
  {
   std::cout << whichhorse;
  }
  else
  {
   std::cout << ".";
  }
  }
  std::cout << std::endl;
}
int race::begin() { // I had this part of the code in my main function in A3 but had to write it this was in A4
int check = 1;
int lastplace;
while (check == 1){ //while loop to exit out of below written for loop once it is 0

   for(int i=0; i < horses; i++){   // for loop to run through all 15 spots/ places where horse is gonna run

   h[i].goingahead();
   lanes(i);
   int currenthorseposition = h[i].horseposition();
   if (currenthorseposition == totallength){

    check = 0;
    lastplace = i;
   }
  }
  std::cout << "\n" << std::endl;  // TA suggested to add this to correct the output
 }
  std::cout << "Horse " << lastplace << " wins !!!" << std::endl;   // print stament to print the horse which reached the last place/ spot first after the above for loop
 return(0);
}

