//Write a program in C to find the sum of all elements of the array.

#include <stdio.h>
void main()
{

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n], sum = 0;

    printf("Enter the numbers: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of given numbers: %d", sum);
    
}