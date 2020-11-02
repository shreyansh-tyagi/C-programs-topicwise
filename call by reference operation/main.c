                 //call by reference

#include <stdio.h>
void add (int*,int*,int*);
void mul(int*,int*,int*,int*);
void main()
{
    int a,b,c,d,e;
    printf("enter the value of a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("\n\naddress of a= %d\n\naddress of b= %d\n\naddress of c= %d",&a,&b,&c);
    add(&a,&b,&d);
    mul(&a,&b,&c,&e);
    printf("\n\nvalue of d=%d",d);
    printf("\n\nvalue of e=%d",e);
}
void add(int *x,int *y,int *f)
{
    int z=0;
    z=*x+*y;
    *f=z;
    printf("\n\nvalue of x=%d\n\nvalue of y=%d ",x,y);
    printf("\n\naddition of x and y= %d",z);
}
void mul(int *x,int *y,int *z,int *g)
{
    int v=0;
    v=(*x)*(*y)*(*z);
    *g=v;
    printf("\n\nvalue of x=%d\n\nvalue of y=%d\n\nvalue of z=%d ",x,y,z);
    printf("\n\nmultiplication = %d",v);
}
