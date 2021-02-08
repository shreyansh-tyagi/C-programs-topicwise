//dynamic memory allocation using malloc function ,structure and array, pointer variable
#include <stdio.h>
#include <stdlib.h>

struct std
{
    int s_id;
    char s_name[30];
    float s_marks[3];
};
void main()
{
    struct std *ptr; //hence we are storing the structure std data therefore we have to typecaste that from void pointer 
    //to structure std data 
    //the data type of pointer variable should be same as the typecasting datatype
    int i,n,j,sum,avg;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("\n\nsize of structure: %d\n\n",sizeof(struct std));
    ptr=(struct std*)malloc(sizeof(struct std));//only one argument is used in malloc function and ptr will store the address of struct emp with it size
    if(ptr==NULL){
        printf("out of memory error:");}
    else{
    for(i=0;i<n;i++)
    {
        printf("enter the student id: ");
        scanf("%d",(ptr+i)->s_id);
        printf("enter the student name: ");
        scanf("%s",(ptr+i)->s_name);
        for(j=0;j<=3;j++)
        {
            printf("enter the student marks: ");
            scanf("%f",&(ptr+i)->s_marks[j]);
        }
    }
    }
    for(i=0;i<n;i++)
    {
        printf(" \n\nthe student id: %d",(ptr+i)->s_id);
        printf("\n\nthe student name: %s",(ptr+i)->s_name);
        for(j=0;j<3;j++)
        {
            printf("\n\nthe student marks: %f",(ptr+i)->s_marks[j]);
        }


    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+(ptr+i)->s_marks[j];
        }
        avg=0;
        avg=sum/n;
        printf("\nsum: %d",sum);
        printf("\n%d",avg);
    }
}
