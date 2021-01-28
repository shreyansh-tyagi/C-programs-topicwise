#include<stdio.h>
void structure(int *,int);
struct std
{ 
    int id;
    char name[30];
    float marks[3];
};
int main()
{
    struct std e[10],*ptr;
    int n,i;
    ptr=e;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the student id: ");
        scanf("%d",(ptr+i))
    }
}