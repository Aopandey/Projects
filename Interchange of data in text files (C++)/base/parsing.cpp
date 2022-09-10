#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#define int_each_row 3
int main(){
std::ifstream infile;
// getting input from file
std::ofstream outfile;
// getting output in file
std::string currentrow;
// current row of text
std::string word;
// current int or string
std::stringstream inputstringstream;
// getting the string input from the input file
std::stringstream outputstringstream;
// getting the string to the output file
infile.open("input.txt");
// to open the input file
outfile.open("output.txt");
// to open the output file
if(!infile){   // if statements if we don't have a input or a output file
	std::cout << "Can't open the file" << std::endl;
}

if(!outfile){
	std::cout << "Can't open the file" << std::endl;
}
while (getline(infile, currentrow)){ // to keep the loop going if we're in the while loop 
inputstringstream.str(currentrow); // initializes the input stream
int integer[int_each_row]; // declaring array
char commas; // declaring variable
int sum = 0; // giving the value 0 to sum

	
for(int i=0; i < int_each_row; i++){ // to loop 3 times and then increment 
if(i == 0){
inputstringstream >> integer[i];  // connects the stream and array
}
else{
inputstringstream >> commas >> integer[i]; // to remove the commas from the input file
}
}

for(int i=0; i < int_each_row; i++){  // for loop to add the array
sum = sum + integer[i];
}

getline(infile, word); //to get the text row
outputstringstream.str(word); 
for(int i=0; i < sum; i++){ // for loop to get everything to output file 
if(i == (sum - 1)){
outputstringstream << word;
}
else{
outputstringstream << word << ",";  
}
}
outfile << outputstringstream.str() << std::endl;
}

infile.close(); // to close input file
outfile.close(); // to close output file

return 0;
}	
	
