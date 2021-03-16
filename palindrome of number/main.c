#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int i,n,a,b,c[50],len=0,d;
    printf("enter the number to get the palindrome of number: \n");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        a=a/10;
        len++;
    }
    while(a!=10)
    {
        b=b%10;
        a=a/10;
    }
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        for(i=0;i<len;i++)
        {
            c[i]=b;
        }


    }
}