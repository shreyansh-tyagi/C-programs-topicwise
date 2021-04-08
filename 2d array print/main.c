#include <stdio.h>
int main()
{
    int a[2][2], b[2][2];
    int i, j;
    // printf("Enter here :-");
    printf("\nMatrix-A\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix-B\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nPRINT\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
      
    for (i = 0; i<2; i++)
    {
        for (j = 0; j<2; j++)
        {
            printf(" %d", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}