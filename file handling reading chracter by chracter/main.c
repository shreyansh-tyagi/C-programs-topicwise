#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *ptr;
    int a;
    char s[50];
    ptr=fopen("D://c programs//file handling reading chracter by chracter//test.txt","r");
    while(a=fgetc(ptr)!=EOF)
    {
        printf("%c\n",a);
    }
}
