#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void nested_structure(int);
struct std {
    int id;
    char name[30];
    struct dob{
        int day,month,year;
    }d1;
}s[50];
void main()
{
    int n;
    printf("enter, of how many student you want the data: ");
    scanf("%d",&n);
    nested_structure(n);

}
void nested_structure(int n)
{
    for(int i=0;i<n;i++)
    {
    printf("\nenter the id: ");
    scanf("%d",&s[i].id);
    printf("\nenter the name: ");
    scanf("%s",s[i].name);
    printf("\nenter the dateofbirth: ");
    scanf("%d%d%d",&s[i].d1.day,&s[i].d1.month,&s[i].d1.year);
    }
    for(int j=0;j<n;j++){
    printf("\nid: %d",s[j].id);
    printf("\nname: %s",s[j].name);
    printf("\ndateofbirth: %d-%d-%d",s[j].d1.day,s[j].d1.month,s[j].d1.year);
    }
}