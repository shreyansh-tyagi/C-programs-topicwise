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
        float marks;
    }*m;
}*s;
void structure(struct std *,int);
void sum_of_marks(struct std *,int);
void main()
{
    int n;
    void (*structure_function_pointer)(struct std *,int);
    printf("\nenter the value of n: ");
    scanf("%d",&n);
    structure_function_pointer=&structure;
    structure_function_pointer()
}