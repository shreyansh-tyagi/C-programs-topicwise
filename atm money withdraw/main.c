/*Ritesh needs to withdraw some money from ATM, When he reaches at ATM he was asked to enter the number of notes he wants of each currency ie. of 100, 500 and 2000.Calculate the total amount wihdrawn by the Ritesh from the ATM in rupees.

Input Format

First line will contain the number of 100 rupee notes.

Second line will contain the number of 500 rupee notes.

Third line will contain the number of 2000 rupee notes

Constraints

0<= Number of notes <= 10^5

Output Format

Total amount Withdrawn.

Sample Input 0

4
5
2
Sample Output 0

6900
Explanation 0

Number of 100 rupee notes is 4 i.e 4x100=400.

Number of 500 rupees notes is 5 i.e 5x500=2500.

Number of 2000 rupees notes is 2 i.e 2x2000=4000.

total amount= 400+2500+4000 = 6900.*/

#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b,c,d,e,f,g;
    printf("enter the number of 100 rupee notes:");
    scanf("%d",&a);

    printf("enter the number of 500 rupee notes:");
    scanf("%d",&b);

    printf("enter the number of 2000 rupee notes:");
    scanf("%d",&c);
    d=a*100;
    e=b*500;
    f=c*2000;
    g=d+e+f;
    printf("%d",g);
}
