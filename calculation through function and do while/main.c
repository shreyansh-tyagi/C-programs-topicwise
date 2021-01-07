#include<stdio.h>
int sum(int,int);
int sub(int,int);
int div(int, int);
int mul(int, int);
int main(int argc, char const *argv[])
{
    int num1, num2 , sw;
    

    do{
      printf("\n");
    printf("Enter Number 1=>");
    scanf("%d", &num1);
    printf("Enter Number 2 =>");
    scanf("%d", &num2);

    printf("\nEnter an operator you want to perform \n+ => press1  \n- => press2  \n/ => press3  \n* => press4 \n");
    printf("\n if you want to exit program press number greater than 4\n");
    printf(" Which operation you want to perform =>");
    scanf("%d",&sw);
 int add , subtract , division ,multiply;


    switch(sw)
    {
     case 1:
      add=sum(num1,num2); printf("\n****Sum of two number is=%d ****",add); 
    break;
    case 2:
     subtract=sub(num1,num2); printf("\n *** Sub of two number is=%d ***",subtract);
     break;
    case 3:
     division=div(num1,num2); printf("\n *** division of two number is=%d ***",division);
     break;
    case 4:
     multiply=mul(num1,num2); printf("\n *** Sub of two number is=%d ***",multiply); 
    break;

    default: printf("invalid operation , Thank you");
    }
    }while(sw<4);
     
     return 0;
}

int sum(int x , int y) { return(x+y);}
int sub(int x , int y) { return(x-y);}
int div(int x , int y) { return(x/y);}
int mul(int x , int y) { return(x*y);}