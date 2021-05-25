#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *ptr=NULL;
    char s[80]="this is the text that we can put into test file";
    ptr=fopen("test.txt","w");
    for(int i=0;i<strlen(s);i++)
    fputc(s[i],ptr);

}