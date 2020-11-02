#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[50],n,loc,m;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        printf("enter the elements into the array: ");
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    printf("first array: ");
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        printf("  %d",a[i]);
    }
    printf("\n\n");
    printf("enter the location from which you want to delete that element: ");
    scanf("%d",&loc);
    printf("\n\n");
        a[loc]=a[loc+1];
        for(i=loc+1;i<=n;i++)
        {
            a[i]=a[i+1];
        }
        printf("enter the value up-to which you want to print array: ");
        scanf("%d",&m);
        printf("\n");
        printf("after deletion the array is: \n\n");
        for(i=0;i<=m;i++)
        {
            printf("  %d",a[i]);
        }
}
