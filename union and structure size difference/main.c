#include <stdio.h>
union unionJob
{
   //defining a union
   char name[32]; //char =32 byte 
   float salary; //float= 4 byte
   int workerNo; //int =4 byte 
} uJob; //but as it is union it will take the size of its largest element which is char = 32 byte 

struct structJob
{
   char name[32]; //char =32 byte 
   float salary; // float =4 byte 
   int workerNo; //int = 4 byte //structure will take the size of all the element at once 

} sJob;

int main()
{
   printf("size of union = %d bytes", sizeof(uJob));
   printf("\nsize of structure = %d bytes", sizeof(sJob));
   return 0;
}