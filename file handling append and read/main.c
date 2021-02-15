#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *ptr=NULL;
    char string[50];
    char s[50];
    char s1[100]="this is the text i gonna write in testforwrite file";
    printf("enter the string for s: ");
    scanf("%s",s);
    ptr=fopen("D://c programs//file handling write and print//test.txt","r");
    fscanf(ptr,"%s",string);
    printf("the file is:   %s",string);
    ptr=fopen("D://c programs//file handling write and print//test.txt","a");
    fprintf(ptr,"\nyour name: %s",s);
    ptr=fopen("D://c programs//file handling write and print//testforwrite.txt","w");
    fprintf(ptr,"%s",s1);
    fclose(ptr);
}