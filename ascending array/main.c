#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[50],n,temp,b[50],large;
    temp=0;j=0;large=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {

        printf("enter the value into the array: ");
        scanf("%d",&a[i]);

    }
    printf("\n\n");
    printf("first array: ");
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n\nArray in Ascending order: \n\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    for(i=0;i<=n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n\nlargest element from array: \n\n");
    for(i=0;i<=n;i++)
    {
        if(a[large]<a[i])
        {
            a[large]=a[i];
        }
    }
    printf(" %d",a[large]);

}
