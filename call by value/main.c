/*call by value is the process in which the value of actual parameter is copied to formal parameter but share a different memory location
it means the value inside the argument of function call will be copied into the argument of function definition
for example : a=10 which is stored at random address 2024 and b=20 which is stored at random address 2026 in a same frame so therefore
function call which is defined as fun(a,b) and  function definition which is defined as fun(int x,int y) then the value of a and b will be copied to
x and y where as the memory location of x random address 1120 and y random address is 1122  so it is easily noticed that memory location a,b and x,y
are different,but share a same value so any operation done in function definition  will not affect function call. */

#include<stdio.h>
void swap(int,int); //without return type and with argument
void main()
{
    int a,b;   //memory will be allocated to a and b
    printf("enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    printf("\n\n");
    printf("address of a=%d\n\naddress of b=%d ",&a,&b);  //print the address of a and b
    swap(a,b);     // actual parameter //after this compiler will search for swap function definition and then execute further statement
    printf("\n\nbefore swap:\n\na=%d\n\nb=%d",a,b); // after executing function definition control come back to this statement
}
void swap(int x,int y)   //formal parameter
                         //value of a and b will be copied to x and y
                         //memory will be allocated to x and y
{
    int temp;
    printf("\n\naddress of x=%d\n\naddress of y=%d",&x,&y);   //print the address of x and y
    temp=0;
    temp=x;
    x=y;
    y=temp;
    printf("\n\nafter swap:\n\nx=%d\n\ny=%d",x,y); // after executing this statement control move back to main function
}

// from output it is clearly noticed that the value of a and b is copied to x and y where the a,b and x,y have different memory location
//and the operation done in function definition doesnt give any impact on function call it means value is accessible only in function definition only.
