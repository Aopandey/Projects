#include <iostream>
#include <cstdlib>
#include "horse.h"


horse::horse() {
horse::position = 0;  // to set the horse's positon to 0
} 
int horse::horseposition() {   // to return the positon of horse
return position;
}
int horse::goingahead() {  // used the same code from previous project i.e A3
int coinflip = rand() %2;
 if (coinflip == 1){

 position++;
 }
}
