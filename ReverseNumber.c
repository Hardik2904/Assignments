// Print number  in reverse order e.g. 64728 to 82746

#include<stdio.h>

int main()
{
    int num, reversenum=0, temp;
    printf("Enter the number : ");
    scanf("%d", &num);

    while(num>0)
    {
        temp = num%10;
        reversenum = reversenum*10 + temp;
        num = num/10;
    }
    printf("Reverse number is %d.", reversenum);
    return 0;
}
