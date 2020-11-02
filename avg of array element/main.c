#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a[50],sum,mul;
    int avg=0;
    sum=0;mul=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter array element:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        printf("array elements are:%d\n",a[i]);
    }
    for(i=0;i<=n;i++)
    {
        sum=sum+a[i];
        mul=mul*a[i];
    }
    avg=sum/n;
    printf("the sum of array elements is:%d\n",sum);
    printf("the multiplication of array elements is:%d\n",mul);
    printf("the average of array element is :%d",avg);
}
