/* There are two N size arrays A and B containing numbers. The third line will contain the numbers of second array B.

Rules:-

(i) If a two digit odd number at some index in first array is followed by a two digit even number at the same index in second array then they are to be added and print it.

(ii) If a two digit even number at some index in first array is followed by a two digit odd number at the same index in second array then they are to be subtracted and print it.

(iii) If an even number at some index in first array is followed by an even number at the same index in second array then they are to be multiplied and print it.

(iv) If an odd number at some index in first array is followed by an odd number at the same index in second array then they are to be multiplied and print it.

(v) If no operations done between numbers then print 0.

Input Format

First line will contain the size N of two arrays.

Second line will contain the numbers of first array A.

Third line will contain the numbers of second array B.

Constraints

Size of N

0

Output Format

Print only the resultant Numbers.

Sample Input 0

5
24 21 23 235 26
23 24 123 258 96
Sample Output 0

1
45
2829
0
2496 */

#include<stdio.h>
#include<conio.h>
 int evenodd (int a[],int b[],int);
 void main()
 {
     int n,a[n],b[n],c;
     scanf("%d",&n);
    c=evenodd(a,b,n);
}
int evenodd (int a[],int b[],int n)
{

    int i;
    for(i=0;i<n;i++)
    {
        printf("\nenter the the value in first array: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nenter the value in second array: ");
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
      if((a[i]<100 && b[i]<100)&&(a[i]!=0 && b[i]!=0)){
        if((a[i]%2!=0)&&(b[i]%2==0)){
            return a[i]+b[i];
        }
        else if((a[i]%2==0)&&(b[i]%2!=0)){
            return a[i]-b[i];
        }
        else if((a[i]%2==0)&&(b[i]%2==0)){
            return a[i]*b[i];
        }
        else if((a[i]%2!=0)&&(b[i]%2!=0)){
            return a[i]*b[i];
        }

    }
    else if((a[i]%2==0)&&(b[i]%2==0&&a[i]!=0)){
        return a[i]*b[i];
    }
    else if((a[i]%2!=0)&&(b[i]%2!=0&&b[i]!=0)){
        return a[i]*b[i];
    }
    return 0;
    }


}



















