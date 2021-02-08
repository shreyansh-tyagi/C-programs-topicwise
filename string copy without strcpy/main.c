
#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,n;
 char str1[500],str2[500];

printf("Enter data for string1 => "); gets(str1);
for(i=0;str1[i]!='\0';i++) str2[i]=str1[i]; 
       str2[i]='\0';
printf("Data copied from string1 to string2 =>"); puts(str2);
return 0;
}
