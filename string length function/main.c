#include<stdio.h>
#include<string.h>
void main()
{
    char ch[]="shreyansh tyagi";
    char ch2[]=" sunny tyagi";
    char *val;
    char a;
    a='s';
    printf("%s\n",ch);
    printf("%d",strlen(ch));
    strcat(ch,ch2);
    printf("\nstring concatenate: %s\n",ch);
    val=strrchr(ch,a);
    printf("val=%s",val);

}