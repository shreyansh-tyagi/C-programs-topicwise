#include<stdio.h>
void main()
{
    char a[50];
    fgets(a,sizeof(a),stdin);
    printf("name: ");
    puts(a);
}