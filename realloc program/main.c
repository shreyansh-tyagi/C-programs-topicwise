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
    s=(struct std*)malloc(n*sizeof(struct std));
}