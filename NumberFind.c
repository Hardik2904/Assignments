/* Find a number is even or odd using ternary operator */
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);

    (a%2==0)? printf("%d is even number", a): printf("%d is odd number",a);
    return 0;
}
