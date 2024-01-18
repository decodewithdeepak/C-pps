// Write a C program to find the largest among four numbers.
#include <stdio.h>
int main()
{
  int a, b, c, d;
  printf("Enter four numbers: \n");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  // //using if else
  // if (a > b && a > c && a > d) {
  //   printf("%d is larger", a);
  // } else if (b > a && b > c && b > d) {
  //   printf("%d is larger", a);
  // } else if (c > a && c > b && c > d) {
  //   printf("%d is larger", a);
  // } else {
  //   printf("%d is larger", d);
  // }

  if (a > b && a > c && a > d)
    printf("%d is largest", a);
  else if (b > c && b > d)
    printf("%d is largest", b);
  else if (c > d)
    printf("%d is largest", c);
  else
    printf("%d is largest", d);

  // using nested if
  // if (a > b)
  // {
  //   if (a > c)
  //   {
  //     if (a > d)
  //     {
  //       printf("%d is greatest \n", a);
  //     }
  //   }
  // }
  // else
  // {
  //   if (b > c)
  //   {
  //     if (b > d)
  //     {
  //       printf("%d is greatest \n", b);
  //     }
  //   }
  //   else
  //   {
  //     if (c > d)
  //     {
  //       printf("%d is greatest \n", c);
  //     }
  //     else
  //     {
  //       printf("%d is greatest \n", d);
  //     }
  //   }
  // }

  return 0;
}