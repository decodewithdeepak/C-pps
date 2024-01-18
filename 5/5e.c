//Write a program in C to find the maximum and minimum element in an array.
#include <stdio.h>
void main() {

  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of array: \n");

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int min = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  printf("Minimum (smallest element): %d \n", min);

  int max = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("Maximum (largest element): %d", max);

  // second largest element
}