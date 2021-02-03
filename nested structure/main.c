#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct std {
    int id;
    char name[30];
    struct dob{
        int day,month,year;
    }d1;
}s1;
void main()
{
    printf("\nenter the id: ");
    scanf("%d",&s1.id);
    printf("\nenter the name: ");
    scanf("%s",s1.name);
    printf("\nenter the dateofbirth: ");
    scanf("%d%d%d",&s1.d1.day,&s1.d1.month,&s1.d1.year);
    printf("\nid: %d",s1.id);
    printf("\nname: %s",s1.name);
    printf("\ndateofbirth: %d-%d-%d",s1.d1.day,s1.d1.month,s1.d1.year);

}