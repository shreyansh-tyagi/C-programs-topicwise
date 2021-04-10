#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   
    int n,a[100],i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i+=2)
    {
    if(a[i]>0)
    {
    sum=sum+a[i];
    }
    }
    printf("%d",sum);
}
