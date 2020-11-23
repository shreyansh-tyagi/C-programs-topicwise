/*Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.*/

/*Note that you cannot sell a stock before you buy one.

Input Format

First line consists size of an array. Second line consists the element of an array.

Constraints

0 < N <= 10^6

Output Format

Output contain maximum profit.

Sample Input 0

6
7 1 5 3 6 4
Sample Output 0

5
Explanation 0

Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Not 7-1 = 6, as selling price needs to be larger than buying price. */
#include <stdio.h>
#include <stdlib.h>

int buysellone(int a[],int);
int main()
{
    int c,n,a[100],i;
    scanf("%d",&n);
    c=buysellone(a,n);
    printf("%d",c);
}
int buysellone(int a[],int n)
{
    int i,j,x=0,y=0,z,w=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                x=a[i];
                y=a[j];
                z=a[j]-a[i];
                if(z>w)
                {
                    w=z;

                }

            }
        }
    }
    return (w);
}
