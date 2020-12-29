#include<stdio.h>
void using_goto_downword()
{
    int n=1;
    printf("using goto downword:\n");
    abc:
    printf(" %d",n);
    ++n;
    // printf(" %d",n);
    if(n<=10)
    goto abc;
}
void using_goto_upword()
{
    int n=1;
    printf("\nusing goto upword:\n ");
    goto xyz;
    printf(" %d",n);
    n++;
    if(n<=10)
    xyz: printf(" %d",n);

}

int main()
{
    using_goto_downword();
    using_goto_upword();
    return (0);
}