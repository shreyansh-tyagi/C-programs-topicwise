#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("enter the marks of the student\n");
    scanf("%d",&marks);
    switch(marks<100)
    {
    case 1:
        if(marks>=90)
            printf("your grade is A+\n");
        //else
            //printf("case 1:invalid case\n");
        break;
    case 2:
        if(marks>=80)
            printf("your grade is B+");
        //else
            //printf("case 2:invalid case");
        break;
    case 3:
        if(marks>=60)
            printf("your grade is C+ ");
        //else
            //printf("case 3:invalid case");
        break;
    case 4:
        if(marks>40)
            printf("your grade is D+");
        //else
            //printf("case 4:invalid case");
        break;
    case 5:
        if(marks<40)
            printf("you are fail");
        //else
          //  printf("case 5:invalid case");
        break;
    default:
        printf("NOT A CORRECT STATEMENT HENCE INVALID CASE");
    }
}
