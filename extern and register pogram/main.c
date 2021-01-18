#include<stdio.h>
void register_class();
void extern_class();
void main()
{
    extern int a;
    extern_class();
    extern_class();
    register_class();
    register_class();
    printf("a=%d\n",(a+10));
    
}
  int a=1; // if i use a =1; and use gcc command to run this program then it will show me a error
void extern_class()
 {
     a+=1;
     printf("a=%d\n",a);
 }
void register_class()
{
    register int b=0;
    b+=1;
    printf("b=%d\n",b);
}