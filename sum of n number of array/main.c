#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a[50],sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        printf("array element are :%d\n",a[i]);
    }
    for(i=0;i<=n;i++)
    {
        sum=sum+a[i];
       // printf("the sum of all array element is:%d",sum);
    }
    printf("the sum of all the elements of array is :%d",sum);
}

