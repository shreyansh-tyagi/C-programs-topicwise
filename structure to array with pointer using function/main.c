#include<stdio.h>
void structure(int);
struct std    //structure is a user defined data type
{ 
    int id;
    char name[30];  //hence it is global declaration of structure therefore it can be accessed to all the function
    float marks[3];
};
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    structure(n);
}
void structure (int n)   //using user defined data type in a user defined function
{
    struct std e[10],*ptr;
    int i,j;
    ptr=e; //passing base address of array "e" , if we doesn't use & then by default the base address of arrray is
    for(i=0;i<n;i++) //array variable already hold the base address 
    {
        printf("enter the student id:\n ");
        scanf("%d",&(ptr+i)->id);
        printf("enter the student name:\n ");
        scanf("%s",(ptr+i)->name);
        for(j=0;j<3;j++)
        {
            printf("enter the mark %d subject:\n ",j+1);
            scanf("%f",&(ptr+i)->marks[j]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("student id:%d\n",(ptr+i)->id);
        printf("student name:%s\n",(ptr+i)->name);
        for(j=0;j<3;j++)
        {
            printf("mark %d subject:\n ",j+1);
            printf("%f\n",(ptr+i)->marks[j]);
        }
    }
}