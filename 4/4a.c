//Write a C program to print a table of numbers using a while loop.
#include <stdio.h>
int main() {
  int n;
  printf("Enter an integer for table: ");
  scanf("%d", &n);

  printf("Displaying multiplication table: \n");
  int i=1;
  while(i<=10){
     printf("%d * %d = %d \n", n, i, n * i);
    i++;
  }
  
  return 0;
}
