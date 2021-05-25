#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *ptr=NULL,*ptr1=NULL;
    char s[80]="this is the text that we can put into test file";
    char s1,s2[80];
    ptr=fopen("test.txt","w"); //opening in append mode
    for(int i=0;i<strlen(s);i++)
    fputc(s[i],ptr);   // this fputc gives the one character to the test file at a time here it is inside the loop start 
    // from zero to the length of string using strlen function
    fprintf(ptr,"\n\nfputc function: ");
    fputc(s[0],ptr);
    fprintf(ptr,"\n\nfputs function: ");
    fputs(s,ptr); // this function will take whole string and print that into the test file 
    ptr1=fopen("D://c programs//file handling function//test.txt","r");
    s1=fgetc(ptr1);
    printf("%c\n",s1);
    fgets(s2,30,ptr1);
    printf("%s",s2);
}