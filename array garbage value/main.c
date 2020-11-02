#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[5];
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]); //here array will take garbage value because it is local declaration of array
    }
}
