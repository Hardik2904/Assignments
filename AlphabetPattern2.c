/* Alphabet Pattern 2

A
A B
A B C
A B C D
A B C D E

*/

#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++)
        {
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}
