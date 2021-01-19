#include<stdio.h>
void deletion(int[],int);
int insertarray(int[],int);
void ascending(int[],int);
void reverse(int[],int);
void evenodd(int [],int);
void sum(int [],int);
void prime(int [],int);
void main()
{
int i,a[100],n,b,c=0,d=0,loc,key,x,y;
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
if(d>=1)
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
            a[i+1]=a[i]; //shifting by 1 element from last
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
        printf("\nOKAY!\n");
    }
}
deletion(a,n);
x=insertarray(a,n);
y=n+x;
ascending(a,y);
reverse(a,y);
evenodd(a,y);
sum(a,y);
prime(a,y);
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
            printf("OKAY!\n");
        }
    }

}

int insertarray(int a[],int n)
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
            for(i=n+1;i>=loc;i--)
            {
                a[i+m]=a[i];
            }
            for(i=1;i<=m;i++)
            {
                a[loc]=b[i];
                loc++;
            }
            printf("\nafter insertion of new array into existing array: ");
            for(i=1;i<=(n+1+m);i++)
            {
                printf(" %3d",a[i]);
            }
            return (m+1);
            break;
        }
        case 'n':
        {
            printf("ruko jara sabar kro.....kch aur kr lete fr\n");
        }
    } 
    

}

void ascending(int x[],int n)
{
    int i,j,temp;
    char s,sort;
    printf("\ndo you want to sort the array:\ntype 'y' or 'n': ");
    scanf("%s",&s);
    if(s=='y')
    {
    printf("\ntype 'a' for ascending and 'd' for descending: ");
    scanf("%s",&sort);
    switch(sort)
    {
        case 'a':
        {
            for(i=1;i<=n;i++)
            {
                for(j=i;j<=n;j++)
                {
                    if(x[i]>x[j])
                    {
                        temp=x[i];
                        x[i]=x[j];
                        x[j]=temp;
                    }
                }

            }
            printf("\narray in ascending: ");
            for(i=1;i<=n;i++)
            {
                printf(" %d",x[i]);
            }
            break;
        }
        case 'd':
        {
            for(i=1;i<=n;i++)
            {
                for(j=i;j<=n;j++)
                {
                    if(x[i]<x[j])
                    {
                        temp=x[i];
                        x[i]=x[j];
                        x[j]=temp;
                    }
                }

            }
            printf("\narray in descending: ");
            for(i=1;i<=n;i++)
            {
                printf(" %d",x[i]);
            }
            break;
        }
    }
  }
  else
  {
    printf("\nchlo fr reverse kr k dekh lete h");
  }
}
  void reverse(int a[],int y)
  {
      char s;
      printf("\ndo you want to reverse the array:\ntype 'y' or 'n': ");
      scanf("%s",&s);
      if(s=='y')
      {
          for(int i=y;i>=1;i--)
          {
              printf(" %d",a[i]);
          }
      }
      else
      {
          printf("OKAY!");
      }
      
  }
  void evenodd(int a[],int n)
  {
      int i,b[50],c[50];
      char s;
      printf("\ndo you want to perform even odd operation, type 'y' or 'n': ");
      scanf("%s",&s);
      if(s=='y')
      {
          for(i=1;i<=n;i++)
          {
              if(a[i]%2==0)
              {
                  b[i]=a[i];
              }
              else
              {
                  b[i]=0;
              }
              
              if(a[i]%2!=0)
              {
                  c[i]=a[i];
              }
              else
              {
                  c[i]=0;
              }
              

          }
          printf("\neven number from array: \n");
          for(i=1;i<=n;i++)
          {
              printf(" %d",b[i]);
          }
          printf("\nodd number from array: \n");
          for(i=1;i<=n;i++)
          {
              printf(" %d",c[i]);
          }
      }
      else
      {
          printf("\nokay, then lets perform sum operation");
      }
  }
      void sum(int a[],int n)
      {
          int sum=0;
          printf("\nthe sum is :");
          for(int i=1;i<=n;i++)
          {
              sum+=a[i];
          }
          printf(" %d",sum);
      }
      void prime(int a[],int n)
      {
          int i,j,m,f,b[50],large=0,c=0;
          for(i=1;i<=n;i++)
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
          
      }



  