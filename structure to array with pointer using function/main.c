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
void structure (int n)
{
     struct std e[10],*ptr;
    int n,i,j;
    ptr=e;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the student id: ");
        scanf("%d",&(ptr+i)->id);
        printf("enter the student name: ");
        scanf("%s",(ptr+i)->name);
        for(j=0;j<3;j++)
        {
            printf("enter the mark %d subject: ",j+1);
            scanf("%f",&(ptr+i)->marks[j]);
        }
    }
}