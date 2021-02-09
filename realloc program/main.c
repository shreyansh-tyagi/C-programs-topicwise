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
void main()
{
    int n,m;
    void (*structure_function_pointer)(int,int);
    printf("\nenter the value of n: ");
    scanf("%d",&n);
    printf("enter the value of m: ");
    scanf("%d",&m);
    structure_function_pointer=&structure;
    structure_function_pointer(n,m);
}
void structure(int n,int m)
{
    int i,j;
    s=(struct std*)malloc(n*sizeof(struct std));
    if(s==NULL)
    {
        printf("out of memory");
    }
    else{
    for(i=0;i<n;i++)
    {
    printf("\nenter id: ");
    scanf("%d",&(s+i)->id);
    printf("\nenter age: ");
    scanf("%d",&(s+i)->age);
    printf("\nenter name: ");
    fgets((s+i)->name,sizeof(s->name),stdin);
    printf("\nenter the day-of-birth: ");
    scanf("%d%d%d",&(s+i)->d.day,&(s+i)->d.month,&(s+i)->d.year);
    for(j=0;j<m;j++)
    {
        printf("\nenter the marks of %d subject: ",j+1);
        scanf("%f",&(s+i)->ma.marks[j]);
    }
    }
    for(i=0;i<n;i++)
    {
    printf("\nid: %d",(s+i)->id);
    printf("\nage: %d",(s+i)->age);
    puts((s+i)->name);
    printf("\nday-of-birth: %d%d%d",(s+i)->d.day,(s+i)->d.month,(s+i)->d.year);
    for(j=0;j<m;j++)
    {
        printf("\nmarks of %d subject: %f",j+1,(s+i)->ma.marks[j]);
    }
    }
    
    }
    n++;
    s=realloc(s,n*sizeof(struct std));
    for(i=0;i<n+1;i++)
    {
    printf("\nenter id: ");
    scanf("%d",&(s+i)->id);
    printf("\nenter age: ");
    scanf("%d",&(s+i)->age);
    printf("\nenter name: ");
    fgets((s+i)->name,sizeof(s->name),stdin);
    printf("\nenter the day-of-birth: ");
    scanf("%d%d%d",&(s+i)->d.day,&(s+i)->d.month,&(s+i)->d.year);
    for(j=0;j<m;j++)
    {
        printf("\nenter the marks of %d subject: ",j+1);
        scanf("%f",&(s+i)->ma.marks[j]);
    }
    }
    for(i=0;i<n+1;i++)
    {
    printf("\nid: %d",(s+i)->id);
    printf("\nage: %d",(s+i)->age);
    puts((s+i)->name);
    printf("\nday-of-birth: %d%d%d",(s+i)->d.day,(s+i)->d.month,(s+i)->d.year);
    for(j=0;j<m;j++)
    {
        printf("\nmarks of %d subject: %f",j+1,(s+i)->ma.marks[j]);
    }
    }
    
    }
