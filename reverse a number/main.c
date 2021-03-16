#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int i,a,b;
    printf("enter the number to be reversed: \n");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        printf("%d",b);
    }
    

}