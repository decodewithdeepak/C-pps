// Write a C program to find the reverse of a number using do-while.
#include <stdio.h>

int main(){
     int n, rev = 0, rem;

    printf("Enter a number to reversed: ");
    scanf("%d", &n);

    do{
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    } while (n != 0);

    printf("Reversed number = %d", rev);

    return 0;
}