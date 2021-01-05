#include<stdio.h>
void primenumber(int);
int main()
{
    int n;
    printf("enter the value :\n");
    scanf("%d",&n);
    primenumber(n);
}
void primenumber(int a)
{
    int flag =0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            flag++;
        }
    }
    if(flag>0)
    printf("not a prime number\n");
    else
    {
        printf("prime number");
    }
}