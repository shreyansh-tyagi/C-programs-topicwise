#include<stdio.h>
void printnumber()
{
    int n=1;
    label:
   // printf(" %d",n);
    ++n;
     printf(" %d",n);
    if(n<=10)
    goto label;
}
int main()
{
    printnumber();
    return (0);
}