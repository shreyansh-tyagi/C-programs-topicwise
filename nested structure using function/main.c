#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void nested_structure(int,int);
struct std {
    int id;
    char name[30];
    struct dob{
        int day,month,year;
    }d1,d;
    struct mark{
        float marks[10];
    }ma;
}s[50],e;
void main()
{
    int n,m;
    printf("enter, of how many student you want the data: ");
    scanf("%d",&n);
    printf("enter the number of subject: ");
    scanf("%d",&m);
    printf("size of student structure(complete structure): %d\n",sizeof(e));
    printf("size of student structure(date of birth structure): %d",sizeof(e.d));
    nested_structure(n,m);

}
void nested_structure(int n,int m)
{

    for(int i=0;i<n;i++)
    {
    printf("\nenter the id: ");
    scanf("%d",&s[i].id);
    printf("\nenter the name: ");
    scanf("%s",s[i].name);
    printf("\nenter the dateofbirth: ");
    scanf("%d%d%d",&s[i].d1.day,&s[i].d1.month,&s[i].d1.year);
    for(int j=0;j<m;j++)
    {
        printf("enter the marks of %d subject: ",j+1);
        scanf("%f",&s[i].ma.marks[j]);
    }
    }
    for(int j=0;j<n;j++){
    printf("\nid: %d",s[j].id);
    printf("\nname: %s",s[j].name);
    printf("\ndateofbirth: %d-%d-%d",s[j].d1.day,s[j].d1.month,s[j].d1.year);
    for(int i=0;i<m;i++)
    {
        printf("\nmarks of %d subject: %f",j+1,s[j].ma.marks[i]);
    }
    }
}