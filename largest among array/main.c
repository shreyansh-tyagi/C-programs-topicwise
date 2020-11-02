#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[7]={20,21,32,45,3,54,11};
    int i,large,small;
    large=a[0];
    small=a[0];
    for(i=1;i<7;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("largest element in array is: %d\n",large);
    printf("smallest element in array is:%d",small);
}
