// 175 = ((1)^1)+((7)^2)+((5)^3)=1+49+125=175
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculateLength(int n){
    int length = 0;
    while(n != 0){
        length = length + 1;
        n = n/10;
    }
    return length;
}

int main()
{
    int num, sum = 0, rem = 0, n;
    printf("enter the number to check: ");
    scanf("%d",&num);
    int len = calculateLength(num);

    //Makes a copy of the original number num
    n = num;

    //Calculates the sum of digits powered with their respective position
    while(num > 0){
        rem = num%10;
        sum = sum + (int)pow(rem,len);
        num = num/10;
        len--;
    }
    printf("sum: %d",sum);

    //Checks whether the sum is equal to the number itself
    if(sum == n)
        printf("this is disarium");
    else
        printf("not");

    return 0;
}
