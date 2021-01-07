#include <stdio.h>
void sum(int n);
void main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    sum(number);

   // return 0;
}

void sum(int n) {
    int a;
    if (n != 0)
        // sum() function calls itself
        a=n + sum(n-1); 
    else
        printf("sum = %d", a);
}