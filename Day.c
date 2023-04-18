// Monday to Sunday using switch case statement
#include<stdio.h>
int main()
{
    int day;

    printf("Enter day number (e.g. Monday = 1, Tuesday = 2, and so on...) : ");
    scanf ("%d", &day);

    switch(day)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid Input. Please enter the number in between 1 to 7.");
    }
    return 0;
}
