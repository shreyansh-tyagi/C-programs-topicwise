#include <stdio.h>
#include <conio.h>

void main()
{
  int i,j,k;
  printf("enter the value of i,j,k \n");
  scanf("%d%d%d",&i,&j,&k);
  if((i<j)||(j>k))
  {
      if((i<k)&&(k<j))
      {
          printf("we are in nested if\n");
      }
      printf("we are in if \n");
  }
  else{
    printf("we are in else\n");
  }
  getch();
}
