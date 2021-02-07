#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter the size of Matirx (will be count as NxN matrix) =>"); scanf("%d",&x);
 
   int a[x][x],i,j,k;

   printf("enter elements for %dx%d matrix(total %d elements) =>\n",x,x,x*x);
     
     for(i=0;i<x;i++) for(j=0;j<x;j++) scanf("%d",&a[i][j]);
     printf("Your matrix is :\n");
     for(i=0;i<x;i++) 
        { for(j=0;j<x;j++)
            {  printf("%5d",a[i][j]);}
               printf("\n");
        }  

        int sum=0;
         for(i=0;i<x;i++) 
          { for(j=0;j<x;j++)
             { 
                 if(i==j)
                 {
                     sum = sum+a[i][j];
                 }
              }
          }
          printf("sum of first diagonal is => %d\n",sum);  

          int sec=0;
         for(i=0;i<x;i++) 
          { for(j=0;j<x;j++)
             { 
                 if(i+j == x-1)
                 {
                     sec = sec+a[i][j];
                 }
              }
          }
          printf("sum of Second diagonal is => %d",sec);  
 return 0;
}


