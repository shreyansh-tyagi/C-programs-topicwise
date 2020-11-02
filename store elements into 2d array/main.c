#include<stdio.h>
#include<conio.h>
void main()
{

    int i,j,n,a[10][10];
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {

            printf("enter the elements into array: ");
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("array elements are: %d\n",a[i][j]);
        }
    }
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
