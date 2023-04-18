// Program to make a summation of given number e.g. 1523 - summation: 11

#include<stdio.h>

int main()
{
    int num, rem, sum=0;
    printf("Enter the number : ");
    scanf("%d", &num);

    while(num>0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;
    }
    printf("Summation of given number is %d. ", sum);
    return 0;
}
