#include<stdio.h>
void main()
{
    int n,count=0,c=0;
    printf("enter the number: \n");
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime number\n");
    }
    else
    {
        printf("not prime number\n");
    }
    for(int j=2;j<n;j++)
    {
        if(n%j==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("prime number");
    }    
    else
    {
        printf("not prime number");
    }
    
}