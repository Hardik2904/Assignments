/* Simple Calculator */
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

    if(opr=='+')
    {
        result = num1 + num2;
        printf("\nAddition of two number is : %d", result);
    }
     else if(opr=='-')
    {
        result = num1 - num2;
        printf("\nSubstraction of two number is : %d", result);
    }
    else if(opr=='*')
    {
        result = num1 * num2;
        printf("\nMultiplication of two number is : %d", result);
    }
    else if(opr=='/')
    {
        if(num2==0)
        {
            printf("Please enter the other number than 0 : ");
            scanf("%d", &num2);
        }
        result = num1 / num2;
        printf("\nDivision of two number is : %d", result);

    }
    else if(opr=='%')
    {
       if(num2==0)
        {
            printf("Please enter the other number than 0 : ");
            scanf("%d", &num2);
        }
        result = num1 % num2;
        printf("\nModulus of two number is : %d", result);
    }
    else
    {
        printf("\nInvalid input");
    }
    return 0;
}
