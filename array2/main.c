#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c,a[5],b[5];
    printf("enter the values into array\n");
    scanf("%d%d",&a,&b);
    for(i=0;i<5;i++)
    {
        printf("%d is the value of first array\n",a[i]);
        printf("%d is the value of second array\n",b[i]);
        c=a[i]+b[i];
        printf("addition of two array is :\n",c);
    }
}
