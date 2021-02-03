#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void nested_structure(int);
struct std {
    int id;
    char name[30];
    struct dob{
        int day,month,year;
    }d1,d[50];
}s1,a[50];
void main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    nested_structure(n);

}
void nested_structure(int n)
{
    for(int i=0;i,n;i++)
    {
    printf("\nenter the id: ");
    scanf("%d",&s1.id);
    printf("\nenter the name: ");
    scanf("%s",s1.name);
    printf("\nenter the dateofbirth: ");
    scanf("%d%d%d",&s1.d1.day,&s1.d1.month,&s1.d1.year);
    }
    for(int j=0;j<n;j++){
    printf("\nid: %d",s1.id);
    printf("\nname: %s",s1.name);
    printf("\ndateofbirth: %d-%d-%d",s1.d1.day,s1.d1.month,s1.d1.year);
    }
}