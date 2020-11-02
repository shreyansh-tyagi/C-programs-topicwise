#include<stdio.h>
#include<conio.h>
struct emp
{
    int e_id;
    char e_name;
    float e_salary;

};
void main()
{
    struct emp e[50];
    int i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        printf("enter elements into array: ");
        scanf("%d%s%f",&e[i].e_id,&e[i].e_name,&e[i].e_salary);

    }
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        printf("  %f",e[i]);
    }
}
