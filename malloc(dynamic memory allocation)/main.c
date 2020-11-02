//malloc function take only one argument where it takes only size of datatype
// using array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*arr;
    printf("enter the value of n: ");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int));
    printf("size of arr: %d",sizeof(arr));
    for(i=0;i<=n;i++)
    {
        scanf("%d",&(*(arr+i)));
    }
    for(i=0;i<=n;i++)
    {
        printf(" %d",*(arr+i));
    }
}
