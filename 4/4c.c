//Write a C program to find the factorial of a number.
#include <stdio.h>
void main() {

  int n;
  printf("Enter a number: ");
  scanf("%i", &n);
  int fact = 1;
  int i = 1;
  while (i <= n) {
    fact = fact * i;
    i++;
  }
  printf("Factorial: %i\n", fact);
}
