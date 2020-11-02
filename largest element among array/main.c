#include<stdio.h>
#include<conio.h>
void main()
{
    int large,a[5],n,i;
    large=0;
    large=a[0];
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter element into array:");
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("array elements is :%d\n",a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    printf("largest element is %d",large);
}
