// Write a program to calculate factorial with the help of user defined function.
#include <stdio.h>
int fact(); // Function Declaration
void main()
{
    int ans = fact(); // Function Calling
    printf("Factorial: %d", ans);
}

int fact() // Function Definition
{
    int n;
    int fac = 1;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        fac = fac * i;
        i++;
    }
    return fac;
}
