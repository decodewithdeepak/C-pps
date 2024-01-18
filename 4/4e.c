// Write a C program to print Fibonacci series using for loop.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. upto which you want to print the series: ");
    scanf("%d", &n);

    int first = 0, second = 1;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", first);
        int next = first + second;
        first = second;
        second = next;
    }

    return 0;
}