#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct std {
    int id,age;
    char name[100];
    struct date_of_birth{
        int day,month,year;
    }d;
    struct marks{
    float marks[20];
    }ma;
}*s;
void structure_function(struct std *,int);
void sum_of_marks(struct std *,int);
void main()
{
    int n,m,i,j;
    void (*structure_function_pointer)(struct std *,int);
    structure_function_pointer=&structure_function;
    void (*sum_of_marks_function_pointer)(struct std * ,int);
    sum_of_marks_function_pointer=&sum_of_marks;
    s=(struct std *)calloc(n,sizeof(struct std));
    printf("\nEnter the number of student: ");
    scanf("%d",&n);
    printf("\nEnter the number of subjects: ");
    scanf("%d",&m);
    printf();
}