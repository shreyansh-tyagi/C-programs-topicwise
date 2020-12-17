#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("enter any alphabet: \n");
    scanf("%c",&a);
    switch(a)
    {
    case 'a' && 'A':
        {
            printf("VOWEL \n");
            break;
        }
    case 'e':
        {
            printf("VOWEL\n");
            break;
        }
        
    case 'i':
        {
            printf("VOWEL \n");
            break;
        }
        
    case 'o':
        {
            printf("VOWEL\n");
            break;
        }
        
    case 'u':
        {
            printf("VOWEL\n");
            break;
        }
        
   /* case 'u':
        {
            printf("we are in case 2\n");
            break;
        } */
    default:
        {
            printf("we are in default");
        }
    }
}
