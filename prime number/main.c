#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[50],b[50],n,temp,large,small,f,m,c;
    temp=0;large=0;small=0;c=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the value into array: ");
        scanf("%d",&a[i]);
    }
    printf("\n\nfirst array:\n\n ");
    for(i=0;i<=n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n\nASCENDING OREDER:\n\n ");
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
    printf("\n\nLARGEST ELEMEENT FROM ARRAY: \n\n");
    for(i=0;i<=n;i++)
    {
        if(a[large]<a[i])
        {
            a[large]=a[i];
        }
    }
    printf("%d",a[large]);
printf("\n\nSMALLEST ELEMENT FROM ARRAY: \n\n");
for(i=0;i<=n;i++)
{
    if(a[small]>=a[i])
    {
        a[small]=a[i];
    }
}
printf("%d",a[small]);
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
printf("\n\nTOTAL PRIME NUMBER: \n\n%d",c);
printf("\n\nPRIME NUMBERS FROM ARRAY: \n\n");
for(i=0;i<=n;i++)
{
    printf(" %d",b[i]);
}
printf("\n\nlargest prime number: \n\n");
for(i=0;i<=n;i++)
{
    if(b[large]<b[i])
    {
        b[large]=b[i];
    }
}
printf("%d",b[large]);
}

