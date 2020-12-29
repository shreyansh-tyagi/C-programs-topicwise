#include<stdio.h>
int main()
{
    printf("by using continue statement :\n");
    for(int i=0;i<=10;i++)
    {
        if(i==6)
        continue;
        else
        {
            printf(" %d",i);
        }
        
    }
}