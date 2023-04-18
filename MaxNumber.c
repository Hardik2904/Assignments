// Program to find out max number from given number (e.g. 1562 - max number is 6)

#include<stdio.h>

int main()
{
    int num=0, max=0, temp, rem;
    printf("Enter the number : ");
    scanf("%d", &num);

    while(num>0)
    {
        rem=num%10;
        num=num/10;

        if(rem>max)
        {
            max = rem;
        }
    }
    printf("The max number is %d.", max);
    return 0;
}
