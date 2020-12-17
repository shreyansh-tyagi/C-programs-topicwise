#include<stdio.h>
int main()
{
    int a[20],n,b;
    printf("how many even number you want to print");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("enter the value into array: ");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n;i++)
    {
        printf(" %d",a[i]);
    }
    for( int i=0;i<=n;i++)
    {
       // printf(" %d",(a[i]%2==0));
      // b=a[i]%2;
      if(a[i]%2==0)
      {
          
          printf("even number: %d\n",a[i]);

      }
      else if(a[i]%2!=0)
      {
          printf("odd number:  %d\n",a[i]);
      }
      // printf("%d",b);
    }
}