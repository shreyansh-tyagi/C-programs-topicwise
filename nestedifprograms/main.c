#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    printf("enter the values\n");
    scanf("%d%d%d",&i,&j,&k);
    if((i<j)||(j>k))
    {
        if((i<k)&&(k<j))
        {
            printf("we are in nested\n");
        }
        printf("we are in if");

    }
    else
        {
        printf("we are in else");
    }
}
