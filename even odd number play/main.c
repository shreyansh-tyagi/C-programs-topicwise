#include<stdio.h>
#include<conio.h>
void evenodd (int a[],int b[],int);
 int main()
 {
     int n,a[100],b[100];
     printf("enter the value : \n");
     scanf("%d",&n);
     evenodd(a,b,n);
}
void evenodd (int a[],int b[],int n)
{

    int i;
    for(i=0;i<n;i++)
    {
        printf("\nenter the the value in first array: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nenter the value in second array: ");
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
      if((a[i]<100 && b[i]<100)&&(a[i]!=0 && b[i]!=0)){
        if((a[i]%2!=0)&&(b[i]%2==0)){
            printf("%d\n",a[i]+b[i]);
        }
        else if((a[i]%2==0)&&(b[i]%2!=0)){
            printf("%d\n",a[i]-b[i]);
        }
        else if((a[i]%2==0)&&(b[i]%2==0)){
            printf("%d\n",a[i]*b[i]);
        }
        else if((a[i]%2!=0)&&(b[i]%2!=0)){
            printf("%d\n",a[i]*b[i]);
        }

    }
    else if((a[i]%2==0)&&(b[i]%2==0&&a[i]!=0)){
        printf("%d\n",a[i]*b[i]);
    }
    else if((a[i]%2!=0)&&(b[i]%2!=0&&b[i]!=0)){
        printf("%d\n",a[i]*b[i]);
    }
        else if(a[i]!=b[i]){
            printf("0\n");
        }
    //return 0;
    }


}


