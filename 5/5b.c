// Write a C program to read n number of values in an array and display it in reverse order.

#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nDisplaying elements in reverse: \t");
    for (int i = n; i >= 1; i--)
    {
        printf("%d\t", arr[i]);
    }
}
