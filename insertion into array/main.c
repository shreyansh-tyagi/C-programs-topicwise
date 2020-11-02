#include<stdio.h>
#include<conio.h>
void main()
{

    int i,a[50],n,key,loc,m;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the elements into array:");
        scanf("%d",&a[i]);

    }
    printf("\n\n");
    printf("first array:\n\n");
    for(i=0;i<=n;i++)
    {
        printf("  %d",a[i]);
    }
    printf("\n\n");
    printf("enter the key elements to insert into array: ");
    scanf("%d",&key);
    printf("\n");
    printf("enter the location where you want to store key element: ");
    scanf("%d",&loc);
    printf("\n");
    for(i=n;i>=loc;i--)
    {
        a[i+1]=a[i];
    }
    a[loc]=key;
    printf("the element which is stored on your entered location is: %d",a[loc]);
    printf("\n\n");
    printf("enter the value upto which location you want to print array elements:");
    scanf("%d",&m);
    printf("\n\n");
    printf("the complete array is :");
    printf("\n\n");
    for(i=0;i<=m;i++)
    {
        printf("  %d",a[i]);
    }
}
