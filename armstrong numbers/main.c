#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void main()
{
    int n,a,b,e,len=0,sum=0;
    printf("enter the number for armstrong number: \n");
    scanf("%d",&n);
    e=a=n;
    while(e!=0)
    {
        e=e/10;
        len++;
    }
    while(n!=0)
    {
        b=n%10;
        sum=sum+pow(b,len);
        n=n/10;

    }
    if(sum==a)
    {
        printf("it is aramstrong number where %d is equal to %d",sum,a);
    }
    else{
        
        printf("it is not aramstrong number where %d is not equal to %d",sum,a);
    }

}