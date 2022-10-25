#include<stdio.h>
#include<conio.h>
void main()
{

    int i,n,j,a[50][50];
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            a[i][j]=i*j;
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }

}