#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[50],n,f,m,temp,large,c,b[50];
    large=0;c=0;
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

    for(i=0;i<=n;i++)
    {
        m=a[i];
        f=0;
        for(j=1;j<=m;j++)
        {
            if(m%j==0)
            {
                f++;
            }
        }
        if(f==2)
        {
            b[i]=a[i];
            c++;
        }
        else
        {
            b[i]=0;
        }
    }
    printf("\n\nlargest prime number: \n\n");
    for(i=0;i<=n;i++)
    {
        if(b[large]<b[i])
        {
            b[large]=b[i];
        }

    }
    printf(" %d",b[large]);
    printf("\n\nsmallest prime number: \n\n");
    for(i=0;i<=n;i++)
    {
        if(b[i]!=0)
        {
            if(b[large]>b[i])
            {
                b[large]=b[i];

            }
        }
    }
    printf(" %d",b[large]);

}
