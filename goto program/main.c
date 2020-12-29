#include<stdio.h>
void using_goto_downword()
{
    int n=1;
    label:
    printf(" %d",n);
    ++n;
    // printf(" %d",n);
    if(n<=10)
    goto label;
}

int main()
{
    using_goto_downword();
    return (0);
}