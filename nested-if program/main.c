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
            printf("nested-if is true\n");
        }
        else
        {
            printf("nested-if is false\n");
        }
        printf("if condition is true\n");
        
    }
    else
    {
        printf("if condition is false\n");
    }
    printf("we are out of if and nested if ");
}