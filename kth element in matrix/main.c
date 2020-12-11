/*First take the input as size of matrix. And take input the element in matrix and the value of K and find the kth smallest element in the matrix.

Input Format

First line consists of size of matrix. Second line consists the element in matrix. Third line consists the value of k.

Constraints

1 <= N <= 50 1 <= mat[][] <= 10000 1 <= K <= N*N

Output Format

Output contain single element.

Sample Input 0

4
16 28 60 64 22 41 63 91 27 50 87 93 36 78 87 94
3
Sample Output 0

27
Explanation 0

27 is the 3rd smallest element.

Sample Input 1

4
10 20 30 40 15 25 35 45 24 29 37 48 32 33  39 50
7
Sample Output 1

30 */


#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,a[100][100],b[100],k,c,temp=0;
   // printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[k++]=a[i][j];
           // k++;
           // printf(" %d",a[i][j]);
        }
    }
    scanf("%d",&c);
    for(i=0;i<n*n;i++)
    {
        for(j=0;j<n*n;j++)
        {
            if(b[i]<=b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
        printf("%d",b[c]);

}
