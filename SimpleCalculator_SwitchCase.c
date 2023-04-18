/* Simple Calculator using switch-case statement*/
#include<stdio.h>
int main()
{
    int num1, num2, result;
    char opr;

    printf("Enter the First Number: ");
    scanf("%d", &num1);
    printf("Enter the Second Number: ");
    scanf("%d", &num2);
    printf("Enter the Operator (e.g. +,-,*,/,%): ");
    scanf(" %c", &opr);

    switch (opr)
    {
    case '+':
        result = num1 + num2;
        printf("\nAddition of two number is : %d", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nSubtraction of two number is : %d", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nMultiplication of two number is : %d", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nDivision of two number is : %d", result);
        break;
    case '%':
        result = num1 % num2;
        printf("\nModulus of two number is : %d", result);
        break;
    default:
        printf("\nInvalid operator");
    }
    return 0;
}
