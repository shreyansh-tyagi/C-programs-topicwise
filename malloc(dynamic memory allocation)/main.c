//malloc function take only one argument where it takes only size of datatype
// using array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int *arr=(int*)malloc(sizeof(int)); //type of pointer variable and the typecasting is same which is of integer type
    printf("size of arr: %d",sizeof(arr));
    printf("\nenter the value into array: ");
    for(i=0;i<=n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<=n;i++)
    {
        printf(" %d",*(arr+i));
    }
}
