#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("enter any alphabet: \n");
    scanf("%c",&a);
    switch(a)
    {
    case 'a':
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
        
    case 'A':printf("VOWEL\n");break;
    
    case 'E':printf("VOWEL\n");break;
    
    case 'I':printf("VOWEL\n");break;
    
    case 'O':printf("VOWEL\n");break;
    
    case 'U':printf("VOWEL\n");break;
    default:
        {
            printf("CONSONENT");
        }
    }
}
