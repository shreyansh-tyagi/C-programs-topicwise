#include<stdio.h>
#include<conio.h>
void main()
{
    //clrscr();
    int i,j,k,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("*"); //printf("%c",'*');
        }
        printf("\n");
    }
    getch();
}
