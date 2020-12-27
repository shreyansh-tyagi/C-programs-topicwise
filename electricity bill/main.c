#include<stdio.h>
int main ()
{
    int unit, amount;
    printf ("Enter Electricity unit => ");
    scanf ("%d", &num);
    if(unit<=100)
    amount = unit*3;
    else
     amount = unit*5;
      printf ("Bill amount is => %d", amount);
                                 
    return 0;
     }
