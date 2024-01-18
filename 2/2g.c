// Write a program to convert double to int using typecast operator.
#include <stdio.h>

int main()
{
    double pi = 3.14159;
     printf("Value of pi = %lf\n", pi);
    int x = (int)pi;
    printf("Rounded Value of pi = %d", x);
    return 0;
}