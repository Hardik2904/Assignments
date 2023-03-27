/* Program to find Simple Interest */
#include<stdio.h>
int main()
{
    int principal, time;
    float rate, interest;

    printf("Enter the Principal Amount: ");
    scanf("%d", &principal);
    printf("Enter the time period: ");
    scanf("%d", &time);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    interest = principal * time * rate / 100;
    printf("Simple Interest is : %.2f", interest);

    return 0;
}
