#include<stdio.h>
void main()
{
    int n,a;
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
    (a>18)?a+10:a-10;
    printf("\nthe value of a: %d",a);

}