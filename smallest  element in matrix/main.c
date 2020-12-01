#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100][100],b[100],i,j,n,m;
    int k=0,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
  /*  for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
    } */
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[k++]=a[i][j];
        }
    }
    for(i=0;i<n*n;i++)
    {
        printf("%d",b[i]);
    }


for(i=0;i<n*n;i++)
{
    for(j=0;j<n*n;j++){
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }

    }

}
//scanf("%d",&m);
for(i=0;i,n*n;i++)
{
    printf("%d",b[i]);
}
}
