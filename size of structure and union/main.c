#include<stdio.h>
struct one   { char name; } s0;
struct two   { char name; int age;}s1;
struct three { char name; int age; float salary;}s2;
struct four  { char name; int age; float salary; double data;}s3;

union one1   { char name; } s4;
union two1   { char name; int age;}s5;
union three1 { char name; int age; float salary;}s6;
union four1  { char name; int age; float salary; double data;}s7;


int main()
{
  int i,j,k,l,s,h,r,y;
  i = sizeof(s0);                          
   j = sizeof(s1);
    k = sizeof(s2);
     l = sizeof(s3);

  s = sizeof(s4);
   h = sizeof(s5);
    r = sizeof(s6);
     y = sizeof(s7);
printf("Total size of structure one => %d\n",i);
printf("Total size of structure two => %d\n",j);
printf("Total size of structure three => %d\n",k);
printf("Total size of structure four => %d\n",l);

printf("\n\nTotal size of union one => %d\n",s);
printf("Total size of union two => %d\n",h);
printf("Total size of union three => %d\n",r);
printf("Total size of union four => %d\n",y);
return 0;
}
