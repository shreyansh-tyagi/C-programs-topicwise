#include<stdio.h>
void main()
{
    int a=10,*ptr;
     ptr=&a;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",*ptr);
    printf("%d\n",*&a);
    printf("%d\n",&ptr);
}