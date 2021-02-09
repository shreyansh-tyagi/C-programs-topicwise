#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,temp=0;
    printf("enter the size of array: ");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        printf("enter the value into array: ");
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */

   /* for (i = 0; i < num / 2; i++) {
        temp = (int) *(arr + num - i - 1);
        *(arr + num - i - 1) = *(arr + i);
        *(arr + i) = temp;
    } */
    for(i = num-1; i>=0; i--)
        printf("%d ", *(arr + i));
   // return 0;
}
