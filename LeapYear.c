/* Program to check the given year is a leap year or not. */
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if((year%4==0)&&((year%400==0)||(year%100!= 0)))
    {
        printf("%d year is a leap year.", year);
    }
    else
    {
        printf("%d year is not a leap year.", year);
    }
    return 0;
}
