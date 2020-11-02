               //without return type and with argument

#include<stdio.h>
#include<conio.h>
void  add(int ,int);
void main()
{
    int a,b;
    printf("enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    add(a,b);
}
void add(int a,int b)
{
    int sum=0;
    sum=a+b;
    printf("sum: %d",sum);
}
