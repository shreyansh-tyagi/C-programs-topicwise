#include<stdio.h>
#include<conio.h>
void main()
{
    struct add
    {
        int n;
    };
    struct add a[10],b;
    printf("enter the value of n:");
    scanf("%d",&b.n);
  //  b.sum=0;
    for(int i=0;i<=b.n;i++)
    {
        printf("enter the value into array: ");
        scanf("%d",a[i]);
    }
    printf("\n\n");
    for(int i=0;i<=b.n;i++)
    {
        printf("  %d",a[i]);
    }
}
