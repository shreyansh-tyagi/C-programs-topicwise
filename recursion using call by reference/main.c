#include<stdio.h>
int recursion(int*);
void main()
{
    int n,b;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("\n\naddress of n=%d",&n);
    b=recursion(&n);
    printf("factorial %d",b);
}
int recursion(int *a)
{
    int factorial=0;
    //printf("\n\naddress of a=%d",&a);
    factorial=(*a)*(recursion((*a)-1));
    //printf("\n\nfactorial of number is : %d",factorial);
    return factorial;
}
