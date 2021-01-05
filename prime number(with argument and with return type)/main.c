#include<stdio.h>
int primenumber(int);
int main()
{
    int n,flag;
    printf("enter the value:\n");
    scanf("%d",&n);
    flag=primenumber(n);
    if(flag>0)
    printf("not a prime number\n");
    else
    {
        printf("prime number");
    }
    
}
int primenumber(int a)
{
    int flag=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        flag++;

    }
    return (flag);
}