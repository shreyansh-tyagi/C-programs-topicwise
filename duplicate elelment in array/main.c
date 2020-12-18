#include<stdio.h>
int main()
{
    int i,a[100],n,j,b;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d",a[i]);
            
            }
        }
        
    }

}