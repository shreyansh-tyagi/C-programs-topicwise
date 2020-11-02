#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],b[50],i,j,n,loc,m,l;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the value into first array: ");
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    printf("first array: \n\n");
    for(i=0;i<=n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n\n");
    printf("enter the value of m:  ");
    scanf("%d",&m);
    printf("\n\n");
    for(j=0;j<=m;j++)
    {
        printf("enter the value into second array: ");
        scanf("%d",&b[j]);
    }
    printf("\n\n");
    printf("second array: ");
    printf("\n\n");
    for(j=0;j<=m;j++)
    {
        printf(" %d",b[j]);
    }
    printf("\n\n");
    printf("enter the location from where you want to insert second array  element into first: ");
    scanf("%d",&loc);
    printf("\n\n");
    for(i=n;i>=loc;i--)
    {
        a[i+m]=a[i];
    }
    for(j=0;j<=m;j++)
    {
        a[loc]=b[j];
        loc++;
    }
    printf("\n\n");
    printf("enter the value up to where you want to print the array: ");
    scanf("%d",&l);
    printf("\n\n");
    printf("AFTER INSERTION: ");
    printf("\n\n");
    for(i=0;i<=l;i++)
    {
        printf(" %d",a[i]);
    }

}
