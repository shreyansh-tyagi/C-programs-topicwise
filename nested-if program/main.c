#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(b<c)
        {
            printf("we are nested if");
        }
        else
        {
            printf("we are in inner else");
        }
        
    }
    else
    {
        printf("we are in outer else");
    }
}