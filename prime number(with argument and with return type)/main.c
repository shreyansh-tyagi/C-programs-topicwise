#include<stdio.h>
int primenumber(int n);
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
int primenumber(int n)
{
    int flog=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        flog++;

    }
    return (flog);
}