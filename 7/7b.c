//Write a program to swap two number using call by reference.
#include <stdio.h>
void swap(int *, int *);
int main() {

  int a, b;
  printf("Enter numbers for swapping:\n a = ");
  scanf("%d", &a);
  printf(" b = ");
  scanf("%d", &b);

  swap(&a, &b);
  printf("After swapping values in main: a = %d, b = %d\n", a, b);
}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
  printf("After swapping values in function: a = %d, b = %d\n", *a, *b);
}
