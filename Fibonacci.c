// Fibonacci series up to given number

#include<stdio.h>

int main()
{
    int a=0, b=1, nextTerm = 0, n;
    printf("Enter a positive number : ");
    scanf("%d", &n);

    printf("%d\t %d\t", a,b);
    nextTerm = a + b;

    while(nextTerm<=n)
    {
        printf("%d\t", nextTerm);
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }

    return 0;
}
