// Write a program to print fibonacci series with the help of user defined function.
#include <stdio.h>

void fibonacci()
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
}

int main()
{
    fibonacci();

    return 0;
}