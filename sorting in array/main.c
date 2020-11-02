
                           //sorting in ascending and descending order


#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,m,a[50],temp,k;
    temp=0;k=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        printf("enter elements into array: ");
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    printf("FIRST: \n\n");
    for(i=0;i<=n;i++)
    {
        printf("  %d",a[i]);
    }
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {

      if(a[i]>a[j])
      {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }

      }
    }
     printf("enter the value up-to where you want to print the array: ");
    scanf("%d",&m);
    printf("\n\n");
    printf("ASCENDING ORDER:");
    printf("\n\n");
    for(i=0;i<=m;i++)
    {
        printf("  %d",a[i]);
    }
    printf("\n\n");

    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    printf("\n\n");
    printf("DESECNDING ORDER:");
    for(i=0;i<=m;i++)
    {
        printf("  %d",a[i]);
    }
    printf("\n\n");

}
