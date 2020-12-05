/* An array of size n, find all elements in array that appear more than n/k times. For example, if the input arrays is {3, 1, 2, 2, 1, 2, 3, 3} and k is 4, then the output should be [2, 3]. Note that size of array is 8 (or n = 8), so we need to find all elements that appear more than 2 (or 8/4) times. There are two elements that appear more than two times, 2 and 3.

Input Format

First line consists the size of an array. Second line consists the element of an array. Third line consists the value of k.

Constraints

1 < N <= 10^5 1 < Ai <=999

Output Format

Output contain the elements that appear more than n/k times.

Sample Input 0

8
5 4 3 5 6 5 1 5
4
Sample Output 0

5
Explanation 0

Given n = 8 and k = 4. So n/k = 8/4 is 2. There is only one elements that appear more than two times is 5. */



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[1000],i,j,k,x,d,c,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    scanf("%d",&k);
    y=n/k;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<n;j++)
        {
            if(a[i]=a[j])
            {
                ++c;
                if(c>y)
                {
                    d=a[j];
                }
            }

        }

    }
    printf("%d",d);

}
