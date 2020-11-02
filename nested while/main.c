#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    i=0;j=0;
    printf("enter the values of n\n ");
    scanf("%d",&n);
    while(++i<=n)
    {
        while(++j<=i)
        {
            printf("%d\n",j);
        }
        printf("%d\n",j);
    }
}
