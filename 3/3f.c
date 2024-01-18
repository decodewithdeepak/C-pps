// Write a program to make a simple Calculator using switch case.
#include <stdio.h>
int main()
{
    char op;
    int num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);

    switch (op)
    {
    case '+':
        printf("Addition: %d", num1 + num2);
        break;
    case '-':
        printf("Subtraction: %d", num1 - num2);
        break;
    case '*':
        printf("Multiplication: %d", num1 * num2);
        break;
    case '/':
        printf("Division: %d", num1 / num2);
        break;
    default:
        printf("Enter a valid operator!");
    }

    return 0;
}
