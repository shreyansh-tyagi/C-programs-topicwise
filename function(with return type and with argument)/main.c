                   //with return type and with argument

#include<stdio.h>
int add(int,int);       //function declaration must end with semicolon and should be above main function
int main()
{
    int a,b,sum=0,s=0;
    printf("enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    sum=add(a,b);        //function call must end with semicolon and should be inside main body
    printf("sum:%d",sum);
    s=sub(a,b);
    printf("sub:%d",sub);
}
int add(int x, int y)    //function defination should not end with semicolon and should outside main body (upward or downword main body)
{
    int res;
    res=x+y;
    return res;
}
int sub(int x,int y)
{
    int res;
    res=x-y;
    return res;

}