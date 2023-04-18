// Swapping two numbers without third variable
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("\nFirst Number before swapping : %d \n", num1);
    printf("Second Number before swapping : %d \n", num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("\nFirst Number after swapping : %d \n", num1);
    printf("Second Number after swapping : %d \n", num2);
    return 0;
}
