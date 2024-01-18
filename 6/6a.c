//Write a program to add two matrices.
#include <stdio.h>

void main() {

  int arr1[3][3], arr2[3][3], sum[3][3];

  printf("Enter elements of array 1: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("Enter elements of array 2: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &arr2[i][j]);
    }
  }

  
  // // Displaying sum of arrays
  printf("Displaying sum of both 2-D Array(Matrix): \n");
  for (int i = 0; i < 3; i++) {
    printf("[ ");
    for (int j = 0; j < 3; j++) {
      printf("%d ", sum[i][j] = arr1[i][j] + arr2[i][j]);
    }
    printf("]");
    printf("\n");
  }
}