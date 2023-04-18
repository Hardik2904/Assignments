// Program to make summation of first and last digit e.g. 1234 - Answer: 5

#include<stdio.h>

int main()
{
    int num, sum=0, firstDigit, lastDigit;

    printf("Enter the positive number more than one digit: ");
    scanf("%d", &num);

    lastDigit = num%10;

    while(num>=10)
    {
        num = num/10;
    }
    firstDigit = num;
    sum = firstDigit + lastDigit;

    printf("Summation of first and last digit is %d.", sum);
    return 0;
}
