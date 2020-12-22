#include<stdio.h>
void main()
{
  char a[50];
  printf("enter your name:"); //gets function take all the string seprated by space also 
  gets(a);
  printf("your name is :");
  puts(a); 
  fgets(a,4,stdin);
  printf("character is : %s",a);
  char t='s',u='n',c;
  printf("enter the any character:");
  c=getchar();  //getchar takes only single chracter as input
  putchar(t);   //putchar gives  only single charcter as output and if we concatenate 
                  //then it give result according to its ASCII value
  putchar(u);
  putchar(t+c);
  putchar( c);
  
  

}
