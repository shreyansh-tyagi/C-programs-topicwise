#include<stdio.h>
void deletion(int[],int);
void insertarray(int[],int);
//void ascending(int[],int);
void main()
{
int i,a[100],n,b,c=0,d=0,loc,key;
char s;
printf("enter how many element you want into the array: ");
scanf("%d",&n);
//insertion into the array from user
for(i=1;i<=n;i++)
{
    printf("enter the value into array: ");
    scanf("%d",&a[i]);
}
//printing array element
printf("array element are:\n");
for(i=1;i<=n;i++)
{
    printf(" %3d",a[i]);
}
//searching element inside array
printf("\nenter the element you want to search inside the array: ");
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
    printf("\nit is present at position: %d and the value is :%d",c,a[c]);
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
printf("enter the location into which you want to insert the element:\n");
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
deletion(a,n);
insertarray(a,n);
//ascending(a,n);
}

void deletion(int a[],int n)
{
    int loc,i;
    char s;
    printf("\ndo you want to delete any element from the array:\n type 'y' or 'n' : ");
    scanf("%s",&s);
    if(s=='y')
    {
        printf("\nenter the location at which you want to delete the element: ");
        scanf("%d",&loc);
        printf("\narray after deletion is :\n");
        a[loc]=a[loc+1];
    }
    switch(s)
    {
        case 'y':
        {
            for(i=loc+1;i<=n;i++)
            {
                a[i]=a[i+1];
            }
            for(i=1;i<=n;i++)
            {
               printf(" %3d",a[i]); 
            }

            break;
        }
        case 'n':
        {
            printf("nikalo fr\n");
        }
    }

}

void insertarray(int a[],int n)
{
    int i,b[100],m,loc;
    char s;
    printf("\ndo you want to insert another array into this array:\ntype 'y' or 'n': ");
    scanf("%s",&s);
    if(s=='y')
    {
        printf("enter  how many element you want to insert inside new array: ");
        scanf("%d",&m);
        for(i=1;i<=m;i++)
         {
            printf("enter the element inside new array: ");
            scanf("%d",&b[i]);
         }
         printf("new array is :\n");
         for(i=1;i<=m;i++)
            {
               printf(" %d",b[i]);
            }
            printf("\nenter the location from where you want to insert the new array into existing array: ");
            scanf("%d",&loc);

    }
    switch(s)
    {
        case 'y':
        {
            for(i=n;i>=loc;i--)
            {
                a[i+m]=a[i];
            }
            for(i=1;i<=m;i++)
            {
                a[loc]=b[i];
                loc++;
            }
            printf("\nafter insertion of new array into existing array: ");
            for(i=1;i<=n+m;i++)
            {
                printf(" %3d",a[i]);
            }
            break;
        }
        case 'n':
        {
            printf("ruko jara sabar kro.....kch aur kr lete fr\n");
        }
    } 
}