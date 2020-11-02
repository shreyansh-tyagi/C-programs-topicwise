#include<stdio.h>
#include<conio.h>
void main()
{
    int marks,a;
    printf("enter the marks of student \n");
    scanf("%d",&marks);
    if((marks<=100)&&(marks>=80))
    {
        a=1;
    }
    else if((marks<=100)&&(marks>=60))
    {
        a=2;
    }
    /* if((marks<=100)&&(marks>40))
    {
        a=3;
    }
    else if((marks<=100)&&(marks<40))
    {
        a=4;
    } */
    switch(a)
    {
    case 1:
        printf("your grade is A+");
        break;
        case 2:
            printf("your grade is B+");
            break;
        case 3:
            printf("your grade is C+");
            break;
        case 4:
            printf("you are fail");
            break;
        default :
            printf("invalid statement");
    }
    getch();

}
