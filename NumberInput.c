/* Program to take 10 No. input from user and find out
- How many even numbers are there
- How many odd numbers are there
- Sum of even numbers
- Sum of odd numbers
*/

#include<stdio.h>
int main()
{
    int i, num[10], evenCount=0, oddCount=0, evenSum=0, oddSum=0;

    printf("Enter 10 positive numbers\n\n");
    for(i=0; i<10; i++)
    {
        printf("Number[%d] : ", i+1);
        scanf("%d", &num[i]);
    }
    for(i=0; i<10; i++)
    {
        if(num[i]%2 == 0)
        {
            evenCount++;
            evenSum += num[i];
        }
        else
        {
            oddCount++;
            oddSum += num[i];
        }
    }
    printf("\nEven number count : %d\n", evenCount);
    printf("Odd number count : %d\n", oddCount);
    printf("Sum of Even number : %d\n", evenSum);
    printf("Sum of Odd number : %d\n\n", oddSum);
    return 0;
}
