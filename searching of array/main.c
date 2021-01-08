#include<stdio.h>
void main()
{
int i,a[100],n,b,c=0,d=0,loc,key;
char s;
printf("enter how many element you want into the array: ");
scanf("%d",&n);
//insertion into the array
for(i=1;i<=n;i++)
{
    printf("enter the value into array: ");
    scanf("%d",&a[i]);
}
printf("array element are:\n");
for(i=1;i<=n;i++)
{
    printf(" %3d",a[i]);
}

printf("\nenter the element you want to search: ");
scanf("%d",&b);
for(i=1;i<=n;i++)
{
    if(a[i]==b)
    {
        c=i;
        d++;
    }
}
if(d==1)
{
    printf("\nit is present at position: %d ",c);
}
else{
    printf("\nsorry bhaiyo ye toh nai mil payega\n");
}
printf("\nDo you want to insert any element into the array...\nType 'y' or 'n : ");
scanf("%s",&s);
if(s=='y')
{
printf("If 'yes' Enter the new key element you want to insert:\n");
scanf("%d",&key);
printf("enter the location you want to insert the element:\n");
scanf("%d",&loc);
}
switch(s)
{
    case'y':
    {
        for(i=n;i>=loc;i--)
        {
            a[i+1]=a[i];
        }
        a[loc]=key;
        for(i=1;i<=n+1;i++)
        {
            printf(" %3d",a[i]);
        }
        break;
    }
    case'n':
    {
        printf("\nchla ja b..k\n");
    }
}
}