#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,a[50][50],b[50][50],sum[50][50],mul[50][50];
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("enter the value of first array: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("first array elements are : %d\n",a[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("enter the value of second array: ");
            scanf("%d",&b[i][j]);
        }
    }
   /* printf("\n\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("second array elements are: %d\n",b[i][j]);
        }
    }*/
    printf("sum:\n\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf(" %d",sum[i][j]);
            }
        }
        printf("multiplication:\n\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            mul[i][j]=a[i][j]*b[i][j];
        printf(" %d",mul[i][j]);
        }
    }
    printf("BOOOOO00OOOOOM");

}
