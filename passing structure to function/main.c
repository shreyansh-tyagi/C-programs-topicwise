#include <stdio.h>
struct student {
   char name[50];
   int age;
}s;

// function prototype
void display(struct student);

int main() {
   struct student s;

   printf("Enter name: ");
   scanf("%s", s.name);

   printf("Enter age: ");
   scanf("%d", &s.age);

   display(s); // passing struct as an argument

   return 0;
}

void display(struct student d) {
   printf("\nDisplaying information\n");
   printf("Name: %s", d.name);
   printf("\nAge: %d", d.age);
}