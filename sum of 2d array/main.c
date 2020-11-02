#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,a[10][10],b[10][10],sum[10][10],mul[10][10],avg[50][50];
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("enter the value of first array:");
            scanf("%d",&a[i][j]);
            printf("enter the value of second of array:");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\n");
    printf("First matrix:\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("second matrix:\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Sum:\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf(" %d",sum[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Multiplication:\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            mul[i][j]=a[i][j]*b[i][j];
            printf(" %d",mul[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("average:\n\n");

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            avg[i][j]=sum[i][j]/n;
            printf(" %d",avg[i][j]);
        }
        printf("\n");
    }

}
