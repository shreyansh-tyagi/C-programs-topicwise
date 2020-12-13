/*There is a society named Fortune Residency which has different apartment numbers. The visitor wants to know if the particular apartment number is present in the society or not? If the number is not found, it will display -1 else it will print the index value of the given number.

Input Format

First line will contain total number of appartments.

Second line will contain list of appartmet numbers seperated by spaces followed by total number of appartments.

Third line will contain the apartment number which user want to search.

Constraints

The total Apartment number should be positive integers between 1 and 100.

Consider indexing of apartment list will start from 0.

Output Format

one line output, if apartment number is found it will display its index otherwise it will display -1

Sample Input 0

5
1 4 34 56 7
90
Sample Output 0

-1
Explanation 0

Output will be** -1** because apartment number 90 is not present in the Apartment list.

Sample Input 1

7
10 22 39 61 85 90 99
61
Sample Output 1

3
Explanation 1

Output is 3 beacuse 61 is present at the index 3 in the Apartment list.*/


#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,c,a[100];
    printf("enter the value :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the value into the array:");
        scanf("%d",&a[i]);
    }
    scanf("%d",&c);
    for(i=0;i<n;i++)
    {
        if(a[i]<100 && a[i]!=0)
        {
            if(c==a[i])
            {
                printf("%d",i);
                return(0);
            }
        }
    }
    printf("-1");

}






