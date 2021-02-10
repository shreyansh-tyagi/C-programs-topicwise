//calloc function take 2 arguments one is length of block and another is size of datatype  and then we have to type caste void a generic pointer to that
//particular datatype
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*arr,a,m;
    printf("enter the value of n: ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));  //calloc function will take two argument first is length of array(5 or anything) and size of datatype(int)
// hence int varies from 2 byte to 4 byte therefore for 32 and 64 bit compiler int take 4 byte so total of 5*4=20 byte will be allocates.
    a=n*sizeof(int);
    printf("total size : %d",a);
    printf("\nenter the array elemnts: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",*(arr+i));
    }
    printf("\nenter the value of m to reallocate the memory: ");
    scanf("%d",&m);
    arr=realloc(arr,m*sizeof(int));
    a=n*sizeof(int)+m*sizeof(int);
    printf("\ntotal size : %d\n",a);
    for(i=n;i<n+m;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n+m;i++)
    {
        printf(" %d",*(arr+i));
    }
}
