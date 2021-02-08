#include <stdio.h>  
#include<string.h>  
#include<stdlib.h>
int main()  
{  
   char str1[2000],str2[2000];    
   int value=0,i=0;   
   printf("Enter the first string : "); gets(str1);  
   printf("Enter the second string : ");gets(str2);  
int size =strlen(str1);
int size1=strlen(str2);
           
 if(size != size1) {printf("String size is not equal: hence not equal"); exit(0);}        
      else
         for(i=0;i<size;i++)
             {
                if(str1[i]==str2[i])
                 value++;
             }
   
(value == size)?printf("EQUAL"):printf("NOT EQUAL");
   
   return 0;  
}
