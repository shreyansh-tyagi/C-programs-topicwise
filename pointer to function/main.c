      //pointer to function
      //syntax: return type (*identifier) (arguments)
      //for example: int (*a)(int,int,int)
#include<stdio.h>
void main()
{
    int a,b,c,r1,r2,r3,r4,r5,r6;
    printf("enter the value of a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    int (*ptr)(int,int);   //can points to the function having two argument and returning integer value //function declaration
    int (*ptr1)(int,int,int); // function declaration in inside main body in pointer to function concept
    r1=add(a,b);    //calling function
    r2=mul(a,b,c); //calling function
    r6=sub(a,b);
    printf("\n\nsum: %d",r1);
    printf("\n\nmul: %d",r2);
    ptr=&add;     // store the address of add frame
    r3=ptr(a,b);  //ptr contains the address of add(2046) therefore it directly point to add frame
                  //and after executing statement the value of c comes to r3
    printf("\n\naddition: %d",r3); // ptr1 contains the address of mul(2048) therefore it directly point to mul frame
                  //and after executing statement the value of d comes to r4
    ptr1=&mul;
    r4=ptr1(a,b,c);
    printf("\n\nmultiplication: %d",r4);
    ptr=&sub;
    r5=ptr(a,b);
    printf("\n\nsubtraction: %d",r5);
}
int add(int a,int b) //let say the address of add frame is 2046 //called function
{
    int c=0;
    c=a+b;
    return c;  //after execution the control move back to main function i.e r3
}
int mul (int a,int b,int c) //let say random address of mul is 2048  //called function
{
    int d=0;
    d=a*b*c;
    return d;
}
int sub (int a,int b)
{
    int c=0;
    c=a-b;
    return c;
}
