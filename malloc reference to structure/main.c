#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int id,age;
    char name[50];
    struct dateofbirth{
        int day,month,year;
    }d;
    struct marks_of_student{
        float marks[3];
    }m;
};
void structure_function(struct student *ptr,int); //function declaration
void sum_of_marks(struct student *marks_pointer,int);
//int size_of_structure ();
void main()
{

    int i,n;
    struct student *p=(struct student*)malloc(n*sizeof(struct student)); //data type of pointer variable and 
    //typcasted variable should same
    void (*structure_function_pointer)(struct student *ptr,int); //this function pointer points to that 
    //function only which have two argument of structure student type and int type with no return type 
    structure_function_pointer=&structure_function;
    printf("\nenter the number of student ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nenter id: ");
    scanf("%d",&(p+i)->id);
    printf("\nenter age: ");
    scanf("%d",&(p+i)->age);
    printf("\nenter name: ");
    scanf("%s",(p+i)->name);
    printf("\nenter the day,month,year: ");
    scanf("%d%d%d",&(p+i)->d.day,&(p+i)->d.month,&(p+i)->d.year);
    for(int j=0;j<3;j++)
    {
        printf("\nenter the marks of %d subject: ",j+1);
        scanf("%f",&(p+i)->m.marks[j]);
    }
    }
    structure_function_pointer(p,n);
    sum_of_marks(p,n);
   // s=size_of_structure();
    //printf("size: %d",s);
}
void structure_function(struct student *ptr,int n)
{
    int i;
     for(i=0;i<n;i++)
    {
    printf("\nid: %d\n",(ptr+i)->id);
    printf("\nage: %d",(ptr+i)->age);
    printf("\nname: %s",(ptr+i)->name);
    printf("\ndate-of-birth: %d-%d-%d\n",(ptr+i)->d.day,(ptr+i)->d.month,(ptr+i)->d.year);
      for(int j=0;j<3;j++)
    {
        printf("\nmarks of %d subject: %f\n",j+1,(ptr+i)->m.marks[j]);
    }
    }

}
void sum_of_marks(struct student *marks_pointer,int n)
{
    int i,j;
    float sum,avg;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+((marks_pointer+i)->m.marks[j]);
        }
        avg=0;
        avg=sum/3;
        printf("\nsum of student %d: %f",i+1,sum);
        printf("\naverage of student %d: %f\n",i+1,avg);

    }
}
