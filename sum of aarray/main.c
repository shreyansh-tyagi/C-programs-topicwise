#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[5]={10,20,30,40,50};
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
        //printf("sum of all the element of array is:%d\n",sum);
    }
    printf("sum is:%d\n",sum);
}

