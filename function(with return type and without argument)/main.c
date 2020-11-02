             //with return type and without argument

#include<stdio.h>
#include<conio.h>
int add(void);
void main()
{
    int sum=0;
    sum=add();
    printf("sum:%d",sum);
}
int add(void)
{
    int a,b,res;
    printf("enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    res=a+b;
    return res;
}
