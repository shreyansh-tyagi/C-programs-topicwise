/*call by reference is the process in which the value of actual parameter is copied to formal parameter but that value is basically the address
of those argument which is present in actual parameter it means they share the same memory location ,basically the address of the argument defined in
function call is copied to function definition for this we use the pointer concept. */


#include<stdio.h>
void swap(int*,int*);  //without return type and with argument// taking two integer pointer variable
void main()
{
    int a,b;    //memory will allocated to a and b
    printf("enter the value of a and b: ");
    scanf("%d%d",&a,&b);  //value will store at address of a and b
    printf("\n\naddress of a=%d\n\naddress of b=%d",&a,&b);
    swap(&a,&b);  //actual parameter//after this the control will search for swap function definition and execute further statement
                  //swap function contains the address of a and b which will be copied to function definition argument

    printf("\n\nafter swap:\n\na=%d\n\nb=%d",a,b); //control come to this statement
}
void swap(int *x,int *y) //address of a,b will be copied to x,y and x,y will directly point to the value stored at that address coz (*) is used
                         //but the memory location of x and y is different
{
    int temp;
    temp=0;
    printf("\n\naddress of x=%d\n\naddress of y=%d",&x,&y);// it will give the address of x and y which is different from a and b
    printf("\n\nvalue of x=%d\n\nvalue of y=%d",x,y);//it will give the value stored in x and y which is same as the address of a and b
    temp=*x;  //x holds the address of a and * is used so that x can directly point to the value at that address which x holds as a value
    *x=*y;
    *y=temp;
    printf("\n\nafter swap:\n\nx=%d\n\ny=%d",*x,*y); //after this control moves back to main function
}

//from output it is clearly noticed that operation done in function definition can give impact on function call because actually it is sharing the
//address and copied to formal parameter
