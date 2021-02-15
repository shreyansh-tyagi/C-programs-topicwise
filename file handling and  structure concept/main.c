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
    float marks[100];
    }ma;
}*s;
void structure_function(struct std *,int);
void sum_of_marks(struct std *,int);
void main()
{
    int n,m;
    printf("\nEnter the number of student: ");
    scanf("%d",&n);
    printf("\nEnter the number of subjects: ");
    scanf("%d",&m);
    printf();
}