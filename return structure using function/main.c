#include <stdio.h>
struct student
{
    char name[50];
    int age;
};

// function prototype
struct student abc(); //function declaration which return structure student data and with argument

int main()
{
    struct student s;
    struct student (*pointer_to_student)(); //function pointer which is having same return type as function have
    //now this function pointer can only point to that function who have no argument and have struct return type
    pointer_to_student=&abc;
    s=pointer_to_student(); //function call of struct return type
    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nage: %d", s.age);
    
    return 0;
}
struct student abc()  //function definition
{
  struct student s;

  printf("Enter name: ");
  scanf ("%[^\n]%*c", s.name);

  printf("Enter age: ");
  scanf("%d", &s.age);
  
  return s;
}	