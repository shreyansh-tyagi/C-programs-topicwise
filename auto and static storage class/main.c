#include<stdio.h>
void auto_class();
void static_class();
void main()
{
    auto_class();
    auto_class();
    auto_class();
    static_class();
    static_class();
    static_class();
} 
void auto_class()
{
    auto int a=0;
    a+=1;
    printf("a=%d\n",a);

}
void static_class()
{
    static int b=0;
    b+=1;
    printf("b=%d\n",b);

}