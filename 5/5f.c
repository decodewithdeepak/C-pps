// Write a program in C to separate odd and even integers in separate arrays.
#include <stdio.h>

int main()
{
    int arr[20], even[20], odd[20];
    int i, j = 0, k = 0, n;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }

    printf("Array of Even elements : ");
    for (i = 0; i < j; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nArray of Odd elements : ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
