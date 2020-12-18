#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int i,a[100],n,j;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d ",a[i]);
            
            }
        
        }

        
        
    }
    
           /*  if(false)
            {
                printf("-1");
                exit(0);
            } */
    

}