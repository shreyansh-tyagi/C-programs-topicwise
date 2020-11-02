#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],b[50],n,i,temp,j;
    printf("enter the value  of n: ");
    scanf("%d",&n);
    i=0;j=n-1;
    for(i=0;i<=n;i++)
    {
        printf("enter the element into array: ");
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    printf("first array: ");
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        printf(" %d",a[i]);

    }
    printf("\n\n");
    while(i<j)
    {
        while(a[i]%2==0)
        {
            i++;
        }
        while(a[j]%2!=0)
        {
            j--;
        }
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }

    for(i=0;i<=n;i++)
    {
        b[i]=a[i];
        printf(" %d",&b[i]);
    }
}
