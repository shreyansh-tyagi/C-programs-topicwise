#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],i,n,b[50],c[50];
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the value into first array: ");
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    printf("first array: \n\n");
    for(i=0;i<=n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n\neven numbers\n\n");
    for(i=0;i<=n;i++)
        {
         if(a[i]%2==0)
         {
             b[i]=a[i];
        printf(" %d",b[i]);
        }
        else
        {
            c[i]=a[i];
        printf(" %d",c[i]);
        }
        }
        for(i=0;i<=n;i++)
        {
            printf(" %d",b[i]);
            printf(" %d",c[i]);

        }
}
