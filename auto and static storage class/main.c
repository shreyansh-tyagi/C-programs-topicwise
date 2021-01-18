#include<stdio.h>
void increment();
void main()
{
    increment();
    increment();
    increment();
} 
void increment()
{
    auto int a=0;
    a+=1;
    printf("a=%d\n",a);

}