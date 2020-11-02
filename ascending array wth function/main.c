                        //without return type and with argument

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void asc (int[],int);
void main()
{
    int i,n,a[50];
    printf("enter the value of n: ");
    scanf("%d",&n);
    if((n<=0)||(n>10))
    {
        printf("invalid value\n\n");
        exit(0);
    }
    else
    {
        for(i=0;i<=n;i++)
        {
            printf("enter the value into array: ");
            scanf("%d",&a[i]);
        }
        printf("\n\nfirst array: \n\n");
        for(i=0;i<=n;i++)
        {
            printf(" %d",a[i]);
        }
    }
    asc(a,n);

}
void asc (int a[],int n)
{
    int i,j,temp;
    temp=0;
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
    printf("\n\nascending order: \n\n");
for(i=0;i<=n;i++)
{
    printf(" %d",a[i]);
}
}
