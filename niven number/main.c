#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a,c,sum=0;
    int b;

    printf("Enter a number \n");
    scanf("%d",&a);

    n=a;//copying the original number

    while(n!=0)
    {
        b=n%10;
        sum+=b;
        n=n/10;
    }

    if(a%sum==0){
        c=a/sum;
        printf("%d",c);}
    else
        printf("0");
}
