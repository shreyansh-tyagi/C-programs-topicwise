#include<stdio.h>
void main()
{
    int i,n,a[100],b=37000;
    printf("enter the value :");
    scanf("%d",&n);
    for(i=1;i<=30;i++)
    {
        b-=20;
        a[i]=b;
    }
    for(i=1;i<=30;i++)
    {
        printf(" %d\n",a[i]);
    }
}