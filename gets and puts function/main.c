#include<stdio.h>
void main()
{
    char a[10],b[1];
    printf("enter your name : ");
    fgets(a,sizeof(a),stdin);
    printf("\n your name: ");
    puts(a);
    printf("enter your name : ");
    gets(b);
    printf("your name: ");
    puts(b);
}