// Write a C program to find if a given year is a Leap Year.
#include <stdio.h>

void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    
}