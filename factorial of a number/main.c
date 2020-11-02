#include <stdio.h>
#include <conio.h>
void main()
{
    int i,c,n;
    c=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i<1;i<=n;i++)
    {
        c=c*i;
        printf("factorial is %d\n",c);
    }
    getch();
    }
