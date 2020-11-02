// pointer is used to access the memory location where the information is stored.
//pointer variable only stores the address of a variable it cannot  store the information
//because pointer size is fixed either 2 byte or 4 byte depend on the complier.
//in typed pointer the datatype of pointer should be same as the datatype of variable like
// int (a) should have int type of pointer only and float should have float pointer only so on.
// %u is used to print the unsigned number it contains only positive integer
// therefore %u can be used to print the address of variable because address should always be positive
// %d is used to print the integer value either positive or negative
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    int *ptr;  //same data type as variable (a) have integer type
    printf("enter the value of A: ");
    scanf("%d",&a);
    ptr=&a;  //it holds the address of a
    printf("value of a: %d\n",a);    //it will give the value of integer a
    printf("address of a: %u\n",&a);  //it will give the address of integer a
    printf("value of ptr: %d\n",ptr); //it will give the value of ptr nothing but the address of a
    printf("address of ptr: %u\n",&ptr);  //it will give the address of ptr
    printf("pointer to a: %d\n",*ptr);  //it will give the value of a ptr coz it holds the address of a and at that address the value of a is stored
    printf("size of pointer: %d",sizeof(*ptr));

}
                                      // two type of operator is used ampersand(&) and asterisk(*)
                                      // & = gives the address of variable
                                      // * = gives the value stored at that particular variable
                                      // *ptr = *(&a)
