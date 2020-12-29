#include<stdio.h>
int main()
{
    printf("Continue statement :\n");
    for(int i=1;i<=10;i++)
    {
        if(i==6)
        continue;
        else
        {
            printf(" %d",i);
        }
        
    }
    printf("\nBreak statement: \n");
    for(int j=1;j<=10;j++)
    {
        if(j==6)
        break;
        else
        {
            printf(" %d",j);
        }
        
    }
}