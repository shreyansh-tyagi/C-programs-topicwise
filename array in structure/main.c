#include<stdio.h>
struct emp
{
    int id;
    char name[30];
    float salary;
};
int main()
{
    struct emp a[50];
    int i,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter employee id: ");
        scanf("%d",&a[i].id);
        printf("enter employee name:");
        scanf("%s",a[i].name);
        printf("enter employee salary: ");
        scanf("%f",&a[i].salary);
    }
    for(i=0;i<=n;i++)
    {
        printf("\nemployee id: %d",a[i].id);
        printf("\nemployee name: %s",a[i].name);
        printf("\nemployee salary: %f",a[i].salary);
    }
}
