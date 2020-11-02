          //without return type and without argument

#include<stdio.h>
#include<conio.h>
void add (void);
void main()
{
    add();

}
void add(void)     //void add()
{
    int a,b,sum=0;
    printf("enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum:%d",sum);
}
