//Write a program in C to convert specified days into years, weeks and days.
#include <stdio.h>
int main() {

  int days, years, rem, weeks;
  printf("Enter the total days:");
  scanf("%d", &days);

  years = days / 365;
  printf("Years: %d\n", years);

  rem = (days % 365);
  weeks = rem / 7;
  printf("Weeks: %d\n", weeks);

  days = rem % 7;
  printf("Days: %d \n", days);

  return 0;
}
