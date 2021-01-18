#include<stdio.h>
void main()
{
    int a[100],b[100],n,i,c=0;
    printf("enter the size of array:  ");
    scanf("%d",&n);
    printf("\nenter the %d value into the array: ",n);
    for(i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
    }
    printf("\nfirst array: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    while(c<n)
    {
        if(a[c]%2==0)
        {
            b[c]=a[c];
        }
        else
        {
            b[c]=0;
        }
        c++;
    }
    printf("\nsecond array that contain only even array: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",b[i]);
    }
}