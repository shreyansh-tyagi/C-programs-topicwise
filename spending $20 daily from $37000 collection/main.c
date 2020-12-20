#include<stdio.h>
#include<conio.h>
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
   /* for(i=1;i<=30;i++)
    {
        printf(" %d\n",a[i]);
    }*/
    for(i=1;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n%d",a[n]);
}
