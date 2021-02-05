#include <stdio.h>
struct student
{
    char name[50];
    int age;
};

// function prototype
struct student abc();

int main()
{
    struct student s;

    s = abc();

    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nRoll: %d", s.age);
    
    return 0;
}
struct student abc() 
{
  struct student s;

  printf("Enter name: ");
  scanf ("%[^\n]%*c", s.name);

  printf("Enter age: ");
  scanf("%d", &s.age);
  
  return s;
}	