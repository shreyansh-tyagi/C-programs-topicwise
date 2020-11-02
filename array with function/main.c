                        //without return type and with argument

#include<stdio.h>
#include<conio.h>
void asc (int[],int);
void main()
{
    int a[50],n;

    asc(a,n);
}
void asc(int a[],int n)
{
    int i;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the value into the array: ");
        scanf("%d",&a[i]);

    }
    printf("\n\nfirst array: \n\n");
    for(i=0;i<=n;i++)
    {
        printf("  %d",a[i]);

    }
}
