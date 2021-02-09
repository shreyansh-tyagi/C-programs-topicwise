#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct std{
    int id,age;
    char name[50];
    struct date_of_birth{
        int day,month,year;
    }d;
    struct marks{
        float marks[50];
    }ma;
}*s;
void structure(int,int);
void sum_of_marks(int,int);
void main()
{
    int n,m;
    void (*structure_function_pointer)(struct std *,int);
    printf("\nenter the value of n: ");
    scanf("%d",&n);
    printf("enter the value of m: ");
    scanf("%d",&m);
    structure_function_pointer=&structure;
    structure_function_pointer(n,m);
    structure_function_pointer=&sum_of_marks;
    structure_function_pointer(n,m);

}
void structure(int n,int m)
{
    int i,j;
    s=(struct std*)malloc(n*sizeof(struct std));
    for(i=0;i<n;i++)
    {
    printf("\nenter id: ");
    scanf("%d",&(s+i)->id);
    printf("\nenter age: ");
    scanf("%d",&(s+i)->age);
    printf("enter name: ");
    fgets((s+i)->name,sizeof(s->name),stdin);
    printf("enter the day-of-birth: ");
    scanf("%d%d%d",&(s+i)->d.day,&(s+i)->d.month,&(s+i)->d.year);
    for(j=0;j<m;j++)
    {
        printf("enter the marks of %d subject: ",j+1);
        scanf("%f",&(s+i)->ma.marks[j]);
    }
    }
}