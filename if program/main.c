#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter the value a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a<b)&&(b<c))
    {
        printf("we are in if\n");
    }
    else{
        printf("we are in else\n");
    }
    if((b>c)||(c>a))
    {
        printf("we are in 2nd if\n");
    }
}
