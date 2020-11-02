#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,m,a[50],b[50],loc,k;
    printf("enter the value of n:  ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        printf("enter the value into FIRST array : ");
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    printf("First array:\n\n");
    for(i=0;i<=n;i++)
    {
        printf("  %d",a[i]);

    }
    printf("\n\n");
    printf("enter the value of m: ");
    scanf("%d",&m);
    printf("\n\n");
    for(i=0;i<=m;i++)
    {
        printf("enter the value into SECOND array: ");
        scanf("%d",&b[i]);
    }
    printf("\n\n");
    printf("Second array:\n\n");
    for(i=0;i<=m;i++)
    {
        printf("  %d",b[i]);
    }
    printf("\n\n");
    printf("enter the location from where you want to insert second array elements into first array: ");
    scanf("%d",&loc);
    for(i=n;i>=loc;i--)
    {
        a[i+m]=a[i];
    }
    for(i=0;i<=m;i++)
    {
        loc++;
        a[loc]=b[i];

    }

    printf("\n\n");
    printf("enter the value up-to where you want the array to print: \n\n ");
    scanf("%d",&k);
    printf("the insertion of FIRST array  into SECOND array is :\n\n ");
    for(i=0;i<=k;i++)
    {
        printf("   %d",a[i]);
    }
    printf("\n\n");
    printf("FINISH");
    printf("\n\n");

}
