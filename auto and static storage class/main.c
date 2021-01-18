#include<stdio.h>
void auto_class();
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