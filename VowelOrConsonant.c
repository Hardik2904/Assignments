// Checking of Vowel or Consonant using switch case statement
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a alphabet : ");
    scanf("%c", &ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        switch(ch)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                printf("\nAlphabet %c is Vowel.", ch);
                break;
            default:
                printf("\nAlphabet %c is Consonant.", ch);
        }
    }
    else
    {
        printf("Invalid input. Please enter alphabet.");
    }
    return 0;
}
