#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i=0;
    while(++i<=5) //this will 5 times whereas i++ will run 6 times
    {
        printf("we are in while\n");
    }
    printf("while loop terminated");
}
