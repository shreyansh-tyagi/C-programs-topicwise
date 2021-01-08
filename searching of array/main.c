#include<stdio.h>
void main()
{
int i,a[100],n;
printf("enter how many element you want into the array:\n");
scanf("%d",&n);
//insertion into the array
for(i=0;i<=n;i++)
{
    printf("enter the value into array:\n");
    scanf("%d",&a[i]);
}
printf("printing the array element:\n");
for(i=0;i<=n;i++)
{
    printf("%3d",a[i]);
}
}
