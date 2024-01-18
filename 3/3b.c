//Write a program in C to find whether a number is even or odd.
#include <stdio.h>

int main() {

  int num;
  printf("Enter a Number: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("Number is Even");
  } else {
    printf("Number is Odd");
  }

  return 0;
}