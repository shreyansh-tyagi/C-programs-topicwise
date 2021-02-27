#include<stdio.h>
void deletion(int[],int*);
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
//insert one element into array
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
deletion(a,&n); //address of n is passed as an argument to actual parameter
x=insertarray(a,n); //control come back after executing insertarray function (if yes then return m and it get added  
y=n+x;   // for next iteration otherwise if no then nothing will be retruned from insertarray function
ascending(a,y);
reverse(a,y);
evenodd(a,y);
sum(a,y);
prime(a,y);
}
// deletion from array
void deletion(int a[],int *n) //call by reference
{
    int loc,i;
    char s;
    printf("\ndo you want to delete any element from the array:\n type 'y' or 'n' : ");
    scanf("%s",&s);
    if(s=='y')
    {
        printf("\nenter the location at which you want to delete the element: ");
        scanf("%d",&loc);
    
    if(loc>(*n))
    {
        printf("opps! location out of limit of array");
    }
    else
    {
        printf("\narray after deletion is :\n");
        a[loc]=a[loc+1]; //deletion that particular element from array
    switch(s)
    {
        case 'y':
        {
            for(i=loc+1;i<=*n;i++)
            {
                a[i]=a[i+1]; //shifting towards left 
            }
            for(i=1;i<=*n;i++)
            {
               printf(" %3d",a[i]); 
            }
            break;
        }
        case 'n':
        {
            // if no then deletion is not done ,and the size of array is increased by one
            *n+=1;
            printf("OKAY!\n");
            break;
        }
    }
    }
    }
    else{
            *n+=1;
            printf("OKAY!\n");
    }
    
}
// insertion of another array into existing array
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
            for(i=n;i>=loc;i--)
            {
                a[i+m]=a[i]; //shifting by the size of new array
            }                //shifting towards right
            for(i=1;i<=m;i++)
            {
                a[loc]=b[i];
                loc++;
            }
            printf("\nafter insertion of new array into existing array: ");
            for(i=1;i<=(n+m);i++)
            {
                printf(" %3d",a[i]);
            }
            return (m); //if yes then the size of existing array will increase with the size of new array
            break;
        }
        case 'n':
        {
            printf("ruko jara sabar kro.....kch aur kr lete fr\n");
        }
    } 
    

}
//sorting in ascending and descending order
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
    printf("\nchlo fr reverse kr k dekh lete h\n");
  }
}
// reverse of array
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
          printf("OKAY!\n");
      }
      
  }
  //even odd from array to another array
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
          printf("\nOKAY!\n");
      }
  }
  //sum of array
      void sum(int a[],int n)
      {
          int sum=0;
          char s;
          printf("\ndo you want perform sum operation..type 'y' or 'n': ");
          scanf("%s",&s);
          if(s=='y')
          {
          printf("\nthe sum is :");
          for(int i=1;i<=n;i++)
          {
              sum+=a[i];
          }
          printf(" %d",sum);
          }
          else
          {
              printf("\nOKAY!\n");
          }
          
              
      }
      //prime number from array
      void prime(int a[],int n)
      {
          int i,j,m,f,b[50],large=0,c=0;
          char s;
          printf("\ndo you want to find the list of prime number from the array...\ntype 'y' or 'n': ");
          scanf("%s",&s);
          if(s=='y')
          {
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
          printf("\nthere are %d prime numbers in this array: ",c);
          printf("\n those prime number are: ");
          for(i=1;i<=n;i++)
          {
              printf(" %d",b[i]);
          }
          //largest prime number from array
          for(i=1;i<=n;i++)
          {
              if(b[large]<b[i])
              {
                  large=b[i];
              }
          }
          printf("\nLargest prime number is: %d",large);
          }
          else
          {
              printf("\nkhel khatam\n");
          }
          

 }



  