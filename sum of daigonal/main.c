#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,a[10][10],sum=0;
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
}
