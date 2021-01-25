#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2;
    printf("enter the row of first array: ");
    scanf("%d",&r1);
    printf("enter the coloumn of first array: ");
    scanf("%d",&c1);
    printf("enter the row of second arrya: ");
    scanf("%d",&r2);
    printf("enter the coloumn of second arrya: ");
    scanf("%d",&c2);
    if(c1==r2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("first array:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf(" %d",a[i][j]);
            }
            printf("\n");
        }
        
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("second matrix: \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf(" %d",b[i][j]);
            }
            printf("\n");
        }
        printf("multiplication of array:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    c[i][j]+=a[i][k]*b[j][k];
                }
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf(" %d",c[i][j]);
            }
            printf("\n");
        }
    }
}