#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,a[10][10],sum=0,sum1=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("\nenter the value into array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i][i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                sum1+=a[i][j];
            }
        }
    }
    printf("\nsum of first diagonal: %d\nsum of second daigonal: %d\ndifference: %d",sum,sum1,abs(sum-sum1));
}
