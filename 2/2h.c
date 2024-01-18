// Write a program to convert int to char.
#include<stdio.h>

int main() {
    
  // create an integer variable
  int number = 100;
  printf("Integer Value: %d\n", number);
 
  // (char) converts number to character
  char alphabet = (char) number; 
  printf("Character Value: %c", alphabet);
  
  return 0;
}