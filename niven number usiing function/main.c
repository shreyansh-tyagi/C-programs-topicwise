// niven number using function 36=3+6=9, 36/9=4   153=1+5+3=9 , 153/9=17
#include<stdio.h>
#include<conio.h>
int abc (int);
int main()
{
    int a,c;

    printf("Enter a number \n");
    scanf("%d",&a);
    c=abc(a);

}
int abc (int a)
{
    int b,sum,n,d;
    sum=0;
    n=a;
    while(n!=0)
    {
        b=n%10;
        sum+=b;
        n=n/10;
    }
     if(a%sum==0){
        d=a/sum;
        printf("%d",d);}
    else
        printf("0");

}
