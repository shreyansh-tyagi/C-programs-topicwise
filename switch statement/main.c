#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter the value of a\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        {
            printf("we are in case one \n");
            break;
        }
    case 2:
        {
            printf("we are in case 2\n");
            break;
        }
    default:
        {
            printf("we are in default");
        }
    }
}
