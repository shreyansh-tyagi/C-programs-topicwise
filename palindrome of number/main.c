#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int n,a,b,c=0;
    printf("enter the number to get the palindrome of number: \n");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        b=n%10;
        c=(c*10)+b;
        n=n/10;
    }
    if(c==a)
    {
        printf("it is palindrome number where %d is equal to %d",c,a);
    }
    else{
        
        printf("it is not palindrome number where %d is not equal to %d",c,a);
    }
}