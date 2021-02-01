#include<stdio.h>
void copystring(char *); //user defined function
void main()
{
    char a[50];
    void (*stringptr)(char *);  //function pointer which take character pointer as a argument
    printf("enter your name along with your address: ");
    stringptr=&copystring; //passing a address of user defined function to a function pointer
    stringptr(a);
}
void copystring(char *b)
{
    fgets(b,50,stdin);
    printf("your information is: ");
    puts(b);

}