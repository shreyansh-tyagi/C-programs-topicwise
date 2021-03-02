#include<stdio.h>
void main()
{
//<<<<<<< HEAD
   // int a[50],i,n,*ptr[50];
//=======
    int a[50],i,n,*ptr[50],sum=0,psum=0;
//>>>>>>> branch
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the value into array: ");
        scanf("%d",&a[i]);  //store value into array
    }
    printf("\n\nfirst array:\n\n");
    for(i=0;i<=n;i++)
    {
        printf(" %d",a[i]);  //print the array
    }
    printf("\n\naddress of the values stored in first array:\n\n");
    for(i=0;i<=n;i++)
    {
        printf(" %d",&a[i]); //address of first array
    }
    for(i=0;i<=n;i++)
    {
        //ptr[i]=&a[i]; // *(ptr+i)=a+i; (this is used while doing programming dynamically)
        *(ptr+i)=a+i; //it will store the address of first array into pointer array
    }
    printf("\n\nvalue of pointer array:\n\n");
    for(i=0;i<=n;i++)
    {
        printf(" %d",ptr[i]); //it will print the value of pointer array, basically the address of first array
    }
    printf("\n\nfirst array:\n\n");
    for(i=0;i<=n;i++)
    {
        printf(" %d",*ptr[i]); //value at that address coz ptr holds the address of first array
        printf(" %d",*(a+i)); // value at the address of first array coz (a+i) gives the address of first array
        printf(" %d",**(ptr+i)); //(ptr+i)= address of pointer array ,for example address of ptr[0]=4048
        // *(ptr+i)=value at that address of pointer array , for example adress of a[0]=2024 will be store in p[0]
        //**(ptr+i)=value at the address of first array , fro example value at **(ptr+i)=**(ptr[0]=4048= a[0]=2024 =a[0]=1)
    }
//<<<<<<< HEAD
//=======
    for(i=0;i<=n;i++)
    {
        sum=sum+a[i];
        psum=psum+(**ptr+i);

    }
    printf("\nsum is: %d",sum);
    printf("\npointer sum is : %d",psum);
//>>>>>>> branch
}
