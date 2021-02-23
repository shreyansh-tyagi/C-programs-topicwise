#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,a[10][10],sum=0,sum1=0;
    unsigned int result=0;
    scanf("%d",&n);
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
    result=sum=sum1;
    printf("\n%d\n%d\n%d",sum,sum1,(sum-sum1));
}
