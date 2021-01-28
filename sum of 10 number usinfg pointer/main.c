#include<stdio.h>
void main()
{
    int a[10]={1,1,1,1,1,1,1,1,1,1};
    int *ptr[10];
    int i,sum=0;
    for(i=0;i<=9;i++)
    {
        ptr[i]=&a[i];
    }
    for(i=0;i<=9;i++)
    {
        sum+=*(*(ptr+i));
    }
    printf("sum=%d",sum);
}