#include<stdio.h>
void main()
{
    int salary,sum_of_salary;
    char name,smoker;
    printf("enter your name :\n");
    scanf("%s",&name); 
    printf("enter your salary: \n");
    scanf("%d",&salary);
    printf("Are you a smoker, if yes then type 'y' otherwise 'n' \n");
    scanf("%s",&smoker); 
    switch(smoker)
    {
        case 'y':
        {
           // printf("your name: %s\n",name);
            if(salary<10000)
            {
            salary=salary-((salary*10)/100);
            printf("your salary after deduction as you are a smoker: %d\n",salary);
            }
            else
            {
              if(salary>10000)
              {
                  salary=salary-((salary*15)/100);
                  printf("your salary after deduction as you are a smoker: %d\n",salary);
              }  /* code */
            }
            break;
            
        }
       // break;
         case 'n':
        {
          //  printf("your name: %s\n",name);
            if(salary<10000)
            {
            salary=salary+((salary*10)/100);
            printf("your salary after increment as you are not a smoker: %d\n",salary);
            }
            else
            {
              if(salary>10000)
              {
                  salary=salary+((salary*15)/100);
                  printf("your salary after increment as you are  not a smoker: %d\n",salary);
              }  /* code */
            }
            break;
            
        }
    }
}