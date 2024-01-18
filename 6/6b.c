//Write a program to multiply two matrices.
#include <stdio.h>

int main() {

  int arr1[3][3], arr2[3][3], mul[3][3];

  printf("Enter elements of matrix 1: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("Enter elements of matrix 2: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &arr2[i][j]);
    }
  }

  printf("Displaying multiplication of both matrix : \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      mul[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        mul[i][j] = mul[i][j] + arr1[i][k] * arr2[k][j];
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", mul[i][j]);
    }
    printf("\n");
  }

  return 0;
}