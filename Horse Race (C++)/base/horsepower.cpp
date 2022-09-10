#include <iostream>
#include <cstdlib>

#define totallength 15     // defines the total units that the horses will move 
#define horses 5   // defines the total number of horses

int goingahead(int position);  // using the protoype function which I learned in the c programming class last semester 
int lanes(int whichhorse, int position);
int horseposition(int position);
int horse[horses]; // creating a array for 5 horses

int main(){    // main function to take input from the user 
 
 int seed;
 int check = 1;
 int lastplace; 
 std::cout << "Please enter a random number or seed! : ";
 std::cin >> seed;
 srand(seed);
 while (check == 1){ //while loop to exit out of below written for loop once it is 0
  
   for(int i=0; i < horses; i++){   // for loop to run through all 15 spots/ places where horse is gonna run
   
   horse[i]= goingahead(horse[i]);
   lanes(i, horse[i]);
   if (horseposition(horse[i] == (totallength))){  // if stament if the positon and total length is same then it'll exit the while loop and end for loop
    
    check = 0;
    lastplace = i;
   }
  }
 }
  std::cout << "Horse " << lastplace << " wins !!!" << std::endl;   // print stament to print the horse which reached the last place/ spot first after the above for loop 
 return 0;
 
}

int goingahead(int position){  // goingahead function to use srand to do a conflip simulation and advance if its 1 or true

 int coinflip = rand() %2;
 if (coinflip == 1){

 position++;
 }
 return position;
}
 
int lanes(int whichhorse, int position){
 
 for(int i=0; i < totallength; i++){ // for loop to go throgh the total distance which the horses will travel
  
  if (i == position) //if  the i and position is exactly the same it'll print the horse on that spot or else if the coin flip is not 1 it'll instead print .
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

int horseposition(int position){  // to return the position of the horses in the above functions
  
 return position;
} 




