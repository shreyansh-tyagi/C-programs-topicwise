#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *ptr=NULL;
    char s[50];
    ptr=fopen("mytext2.txt","r");
    fscanf(ptr,"%s",s);
    printf("after reading file from mytext we get: %s",s);   
}