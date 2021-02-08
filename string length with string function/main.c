#include<stdio.h>
int main()
{
int i=0;
char str[1000];

printf("Enter any string => "); gets(str);

while(str[i]!='\0')
{
    i++;
}

printf("Length of string is => %d",i);
return 0;
}
