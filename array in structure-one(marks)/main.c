  
#include<stdio.h>
struct student
{
    int id;
    char name[30];
    float marks[3]; //array variable //to get marks of 3 students (0 to 2)
};
void main()
{
    struct student a[50];  // array of structure
    int i,n,j,sum,avg;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the student id: ");
        scanf("%d",&a[i].id);
        printf("enter the student name: ");
        scanf("%s",a[i].name);
        printf("enter the marks of 3 subjects:\n");
        for(j=0;j<3;j++)
        {
            scanf("%f",&a[i].marks[j]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\nstudent id: %d",a[i].id);
        printf("\nstudent name: %s",a[i].name);
        for(j=0;j<3;j++)
        {
            printf("\nstudent marks: %f",a[i].marks[j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i].marks[j];
        }
        avg=0;
        avg=sum/3;
        printf("\nsum of marks: %d",sum);
        printf("\naverage of marks: %d",avg);
    }
}