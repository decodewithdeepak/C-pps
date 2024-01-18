// Write a program in C to store elements in an array and print it.

#include <stdio.h>

void main()
{
    int arr[5];
    printf("Enter 5 elements: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Displaying elements of array: \t");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }

}
