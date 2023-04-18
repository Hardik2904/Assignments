// Print table up to given number
#include<stdio.h>

int main()
{
    int i, j, num, table;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("\n");
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=10; j++)
        {
            table = i*j;
            printf("%3d x %2d = %3d\n", i, j, table);
        }
        printf("\n\n");
    }
    return 0;
}
