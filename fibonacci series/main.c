#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,a,b,c;
    a=0;
    b=1;
    printf("enter the values of n\n");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i<0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("the fibonacci series of the number is: %d",b); 
    }
    getch();
}
