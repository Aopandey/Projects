
#include <stdio.h>
#define MAX 9

void printValues();
void sort();
void swap(int*, int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
// main function provided by the professor
int main(){
  printf("Before: \n");
  printValues();
  sort();
  printf("After: \n");
  printValues();

  return(0);
} 
// print function which prints values stored in array values[] in [ and ]
void printValues(){
 int a;
 printf("[");
 for(a=0; a < MAX; a++)
 {
    printf("%d", values[a]);
 }
 printf("]\n");
}
// in sort fuction I used 2 nested for loops to so throguh each and every element in the array values[]
void sort(){
int a,b;
for(a=0; a < MAX; a++)
  { 
     for(b=0; b < MAX-1; b++)
        {
             // basic if statement to compare first value to its next and swap if its less than that 
             if(values[b] > values[b + 1])
              {
                  swap(&values[b + 1],&values[b]);
                  printValues();
              }
        }
  }
}
// in swap function I used 2 pointers to sort the values in ascending order 
void swap(int* newvalues , int* oldvalues){
int temporary_values;

temporary_values = *oldvalues;
*oldvalues = *newvalues;
*newvalues = temporary_values;
}

