// Write a C program to calculate average of array elements.
#include <stdio.h>
void main()
{

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n], sum = 0;
    float avg;

    printf("Enter the numbers: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    avg = (float)sum / n;
    printf("Average of given numbers: %f", avg);
    
}