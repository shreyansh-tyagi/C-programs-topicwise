#include<stdio.h>
#include<conio.h>
void main()
{

    int i,n,a[30];
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter elements into array:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        printf("array elements are : %d\n",a[i]);

    }
}
