#include<stdio.h>
#include<conio.h>
int recursion (int);
void main()
{
    int n,result;
    printf("enter the value of n: ");
    scanf("%d",&n);
    result=recursion(n);
    printf("factorial of a number: %d",result);
}
int recursion(n)
{
    int res;
    if(n==0)
        res=1;
    else
        res=n*recursion(n-1);
    return res;
}
