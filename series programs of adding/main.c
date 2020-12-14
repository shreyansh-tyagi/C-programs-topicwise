/* Krishna is not getting the reason and solution for the below given series:

2+9+4+1= 7

3+5+0+7+2= 8

7+1+8+6= ?

Now you have to write a generic program to find the logic behind the given statement and help Krishna to solve any series like this.

Input Format

First line will contain no. of elements in series (n) Second line will contain elements seprated by space

Constraints

0<=n<=15
value of elements 0<=n[i]<=99
Output Format

Will contain only one line output i.e the result after evaluvating the series.

Sample Input 0

4
2 9 4 1
Sample Output 0

7
Sample Input 1

5
3 5 0 7 2
Sample Output 1

8 */

#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n,sum=0,r,q,x;
    printf("enter the value :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];


    }
    q=sum/10;
    r=sum%10;
    x=q+r;
    printf("%d",x);



}
