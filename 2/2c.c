//Write a program in C to swap two numbers.
#include <stdio.h>
int main() {
  int num1, num2, temp;

  printf("Enter numbers for Swapping:\n");
  printf("num1 = ");
  scanf("%d", &num1);
  printf("num2 = ");
  scanf("%d", &num2);

  temp = num1;
  num1 = num2;
  num2 = temp;

  printf("Numbers After Swapping:\n");
  printf("num1= %d \nnum1= %d", num1, num2);

  return 0;
}
