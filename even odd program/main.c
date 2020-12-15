#include<stdio.h>
int main()
{
    int a[20],n,b;
    printf("enter the value upto where you want even number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("enter the value into array: ");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n;i++)
    {
        printf("\n %d",a[i]);
    }
    for( int i=0;i<=n;i++)
    {
       // printf(" %d",(a[i]%2==0));
      // b=a[i]%2;
      if(a[i]%2==0)
      {
          printf(" %d",a[i]);

      }
      // printf("%d",b);
    }
}