#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *ptr=NULL;
    char string[100]=" i am shreyansh now trying to append this text into mytext.txt file";
    ptr=fopen("D://c programs//file handling read and print//mytext2.txt","a");
    fprintf(ptr,"%s",string);
}