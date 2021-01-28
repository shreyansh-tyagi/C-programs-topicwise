#include<stdio.h>
void passchck(int *,int);
int main()
{
    int i,a[50],n;
    int *p;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the value into array: ");
    p=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    passchck(p,n);
}
void passchck(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d",*(p+i));
    }
}