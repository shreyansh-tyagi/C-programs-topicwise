
                               //selection and deletion together from an array

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a[50],loc,k,m;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        printf("enter the value into the array: ");
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    printf("first array:");
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        printf("  %d",a[i]);
    }
    printf("\n\n");
    printf("enter the location which you want to select: ");
    scanf("%d",&loc);
    printf("\n\n");
        k=a[loc];
    printf("selected element is :\n\n");
    printf(" %d",k);
    a[loc]=a[loc+1];
    for(i=loc+1;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    printf("\n\n");
    printf("enter the value up-to where you want the array to print: ");
    scanf("%d",&m);
    printf("\n\n");
    printf("after DELETION array is: ");
    printf("\n\n");
    for(i=0;i<=m;i++)
    {
        printf("  %d",a[i]);
    }
}
