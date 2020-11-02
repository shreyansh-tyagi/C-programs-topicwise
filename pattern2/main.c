#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=n;j>=i;j--)  /*reverse pattern printing*/
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
}
