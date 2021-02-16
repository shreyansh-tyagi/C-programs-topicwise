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
void structure(struct std *,int,int);
int main()
{
    int n,m,i,j;
    void (*structure_function_pointer)(struct std *,int,int);
    printf("\nenter the number of student: ");
    scanf("%d",&n);
    printf("enter the number of subjects where subjects should not be more than 10: ");
    scanf("%d",&m);
    if(m<=10){
    structure_function_pointer=&structure;
    s=(struct std*)calloc(n,sizeof(struct std));
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
    printf("\nenter name(use 'underscore(_)' for space): ");
    scanf("%s",(s+i)->name);
    printf("\nenter the day-of-birth: ");
    scanf("%d%d%d",&(s+i)->d.day,&(s+i)->d.month,&(s+i)->d.year);
    for(j=0;j<m;j++)
    {
        printf("\nenter the marks of %d subject: ",j+1);
        scanf("%f",&(s+i)->ma.marks[j]);
    }
    }
    structure_function_pointer(s,n,m);
}
}}
void structure(struct std *s,int n,int m)
{
   int i,j;
   float sum,avg;
   FILE *ptr=NULL;
   ptr=fopen("student details.txt","a");
    for(i=0;i<n;i++)
    {
    fprintf(ptr,"\nid: %d",(s+i)->id);
    fprintf(ptr,"\nname: %s",((s+i)->name));
    fprintf(ptr,"\nday-of-birth: %d-%d-%d",(s+i)->d.day,(s+i)->d.month,(s+i)->d.year);
    fprintf(ptr,"\nage: %d",(s+i)->age);
    for(j=0;j<m;j++)
    {
        fprintf(ptr,"\nmarks of %d subject: %f",j+1,(s+i)->ma.marks[j]);
    }
    sum=0;
    for(j=0;j<m;j++)
    { 
        sum+=(s+i)->ma.marks[j];
    }
    avg=0;
    avg=sum/m;
    fprintf(ptr,"Total marks of %s: %f",(s+i)->name,sum);
    fprintf(ptr,"Percentage of %s: %f",(s+i)->name,avg);

    }
}

