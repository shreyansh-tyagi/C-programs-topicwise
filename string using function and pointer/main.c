#include<stdio.h>
void copystring(char *);
void main()
{
    char a[50];
    void (*stringptr)(char *);  //function pointer
    printf("enter your name along with your address: ");
    stringptr=&copystring;
    stringptr(a);
}
void copystring(char *b)
{
    fgets(b,50,stdin);
    printf("your information is: ");
    puts(b);

}