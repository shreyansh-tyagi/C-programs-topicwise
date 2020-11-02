#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b;
    printf("enter the value\n");
    scanf("%d",&b);
    printf("%d is the value of b\n",b);
    printf("%u is the address of b\n",&b);   //%d is the format specifier of the integer
}                                          //%c and %f is the format specifier of character and float data type respectively
                                           //%u is used to print the address of variable along with ampersand(&)
