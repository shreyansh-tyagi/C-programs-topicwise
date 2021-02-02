//structure is the user defined datatype in which n number of different datatype can be defined.
#include<stdio.h>
#include<conio.h>
void check();
struct emp                //global declaration
{                         //hence it is global declaration therefore the structure data type is accessible to all the function
    int e_id;
    char e_name[30];
    float e_salary;

};
int main()
{                                                  // .(dot) operator is the access specifier used to access structure variable
    struct emp e;
    printf("the size of structure is: %d\n\n ",sizeof(e));
    printf("size is: %d\n\n", sizeof(struct emp));
    printf("enter employee id: \n\nenter employee name: \n\nenter employee salary: \n\n ");
    scanf("%d%s%f",&e.e_id,e.e_name,&e.e_salary);
    printf("\n\nemployee id: %d\n\nemployee name: %s\n\nemployee salary: %f\n\n",e.e_id,e.e_name,e.e_salary);

                                                         /* here e is the access specifier through
                                                         which we can access structure data type */

                                                        // %s is used to read string type variable
                                                        // %f is used to read float type variable
check();
}
void check()
{
    struct emp k;
    printf("size: %d",sizeof(k));
}
