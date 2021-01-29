#include<stdio.h>
void swap(int *,int *);  //function declaration that have two integer pointer argument and returing void means nothing
void main()
{
    int a,b;
    void (*ptr)(int *,int*); //function pointer that can point to the function that have two integer 
                             //pointer argument and return a void means null value
    printf("enter the value of a and b: \n");
    scanf("%d%d",&a,&b);
    printf("before swap: a= %d  b= %d",a,b);
    ptr=&swap; //passing the address of 'swap' function block to 'ptr' function pointer
    ptr(&a,&b); //function call through function poiinter variable
    printf("\nafter swap: a= %d  b= %d",a,b);
}
void swap(int *x,int *y)
{
    int temp=0;
    temp=*x;
    *x=*y;   //call by reference process
    *y=temp;
    printf("\nafter swap: x= %d  y= %d",*x,*y);
}
