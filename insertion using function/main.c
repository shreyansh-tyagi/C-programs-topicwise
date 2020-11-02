                     // without return type and with argument


#include<stdio.h>
#include<conio.h>
void insert (int[],int[],int,int);
void main()
{
    int a[50],b[50],n,m,i;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        printf("enter the value into the first array: ");
        scanf("%d",&a[i]);

    }
    printf("\n\nfirst array: \n\n");
    for(i=0;i<=n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n\nenter the value of m:");
    scanf("%d",&m);
    printf("\n\n");
    for(i=0;i<=m;i++)
    {
        printf("enter the value into second array: ");
        scanf("%d",&b[i]);
    }
        printf("\n\nsecond array:\n\n");
        for(i=0;i<=m;i++)
        {
            printf("% d",b[i]);
        }
        insert(a,b,n,m);
}
void insert (int a[],int b[],int n,int m)
{
   int loc,i,k;
   printf("\n\nenter the location from where you the array to insert: ");
   scanf("%d",&loc);
   for(i=n;i>=loc;i--)
   {
       a[i+(m+1)]=a[i];
   }
   for(i=0;i<=m;i++)
   {
       a[loc]=b[i];
       ++loc;
   }
   printf("\n\nenter the value up to where you the array to print: ");
   scanf("%d",&k);
   for(i=0;i<=k;i++)
   {
       printf(" %d",a[i]);
   }
}




