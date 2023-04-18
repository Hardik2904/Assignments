// print factorial of a given number

#include<stdio.h>

int main()
{
    int num, i, fact=1;
    printf("Enter the positive number : ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        fact*=i;
    }
    printf("Factorial of the number %d is %d.", num, fact);
    return 0;
}
