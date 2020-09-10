// Author: Kieran Murdocca kkm5754@psu.edu
// Collaborator: Reuben Lee wzl128@psu.edu
// Collaborator: Augustus Perseghin agp5191
// Collaborator: Krish Choudhary ksc5496@psu.edu
// Section: 004
// Breakout: 18
// Part 1: lab2-c
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void) {
char* lg;
char* input;
float ng;
input = readline("Enter your CMPSC 131 grade: "); 
ng = atof(input);
if (ng >=93){
  lg = "A";
}
else if (ng >=90){
  lg = "A-";
}
else if (ng >=87){
  lg = "B+";
}
else if (ng >=83){
  lg = "B";
}
else if (ng >=80){
  lg = "B-";
}
else if (ng >=77){
  lg = "C+";
}
else if (ng >=70){
  lg = "C";
}
else if (ng >=60){
  lg = "D";
}
else {
  lg = "F";
}
printf("Your letter grade for CMPSC 131 is %s.\n", lg);
return 0;
}