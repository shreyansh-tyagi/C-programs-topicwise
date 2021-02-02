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
void copystring(char *b) // b contain the based address of array a
{
    char *p;
    p=b; //value of b is passed to character pointer p and the value of b is actually the base address of array a
    fgets(b,50,stdin);
    printf("your information is: ");
    puts(b);
    printf("value at a[0]: %c\n",*p);
    printf("value at a[5]: %c",*(p+5));

}