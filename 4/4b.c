// Write a C program to add numbers until the user enters 0.

#include <stdio.h>
int main()
{
    int n, sum = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        sum += n;
    } while (n != 0);

    printf("Sum = %d", sum);

    return 0;
}