/*enum is the enumeration user defined data type in which we can store n number of constant values which can
 be accessed through a access specifier and in a function we can pass some variable to a enumeration data type
 and can operate on this  */


#include<stdio.h>
#include<conio.h>
enum days
{
    monday=1,
    tuesday,wednesday,thursday,friday,saturday,sunday
};
void main()
{
int n;
enum days d;
printf("enter the value of n for days between (1-7): ");
scanf("%d",&n);
if(n<=7){
d=n;
printf("\n\n");
if((d==saturday)||(d==sunday))
{
    printf("weekend days");
}
else
    {
        printf("working days");
        printf("\n\n");
}
printf("\n\n");
}
}
