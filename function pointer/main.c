#include<stdio.h>
int swap(int *,int *);  //function declaration that have two integer pointer argument and returing a integer value 
void main()
{
    int a,b,r1;
    int (*ptr)(int *,int*); //function pointer that can point to the function that have two integer 
                             //pointer argument and return a integer value 
    printf("enter the value of a and b: \n");
    scanf("%d%d",&a,&b);
    ptr=&swap; //passing the address of swap function block to function pointer ptr
    r1=ptr(a,b);
    printf("after swap: a=%d\nb=%d",a,b);
}