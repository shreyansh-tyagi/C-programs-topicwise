#include<stdio.h>
void main()
{
    int n,a,b=10,c=20;
    printf("enter the age:");
    scanf("%d",&n);
    if(n>18)
    {
        printf("you are eligible\n");
    }
    else{
        printf("you are not eligibile\n");
    }
    printf("\nenter another age :");
    scanf("%d",&a);
    (a>18)?printf("you are eligible"):printf("you are not eligible");
    (a>18)?b:c;
    printf("\nthe value of b and c: %d %d",b,c);

}