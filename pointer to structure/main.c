//structure is the user defined data type in which we can define n number of data type
//structure to pointer means pointer variable will point to the data element which is defined in structure


#include<stdio.h>
struct emp  // structure definition
{
    int e_id;
    char e_name[30];
    float e_salary;
};
void main()
{
    struct emp e ,*ptr; // structure variable declaration and structure pointer variable declaration
    ptr=&e;  // storing address of e which is used to fetch structure data type
    printf("\nenter the employee id: ");
    scanf("%d",&e.e_id); // dot(.) operator is used to fetch data using structure variable identifier
    printf("\nenter employee name: ");
    scanf("%s",ptr->e_name); // hyphen and greater sign is used and together it is called arrow operator to
                            //fetch data of structure using structure pointer variable
    printf("\nenter employee salary: ");
    scanf("%f",&ptr->e_salary);
        printf("\nemployee id: %d",ptr->e_id);
        printf("\nemployee name: %s",ptr->e_name);
        printf("\nemployee salary :%f",ptr->e_salary);

}
