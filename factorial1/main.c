#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,c;
    c=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=c*i;
       // printf("the factorial is %d\n",c);
    }
    printf("the factorial is %d\n",c);
    getch();
}
