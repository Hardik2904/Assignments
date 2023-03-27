/* Convert days into years and years into days. */
#include<stdio.h>
int main()
{
    int days=0, years=0;
    char ch;

    printf("Enter the 'Y' to convert days into years or 'D' to convert years into days: ");
    scanf(" %c", &ch);

    if((ch=='Y')||(ch=='y'))
    {
        printf("Enter the no of days greater than or equal to 365 : ");
        scanf("%d", &days);

        years = days/365;
        days = days - (years*365);

        printf("Years: %d\n", years);
        printf("Days: %d\n", days);
    }
    else if((ch=='D')||(ch=='d'))
    {
        printf("Enter the no of years greater than or equal to 1 : ");
        scanf("%d", &years);

        days = years*365;
        printf("Days: %d\n", days);
    }
    else
    {
        printf("You have entered the wrong character.");
    }
    return 0;
}
