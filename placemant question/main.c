#include "stdio.h"
#include "stdio.h"
 /* char add()
    {
        char s[]="will i get printed";
        return s;    }
int main()
{
    /*static int var=5;
    printf("%d",var--);
    if(var)
    main(); */
   /* int a =320;
    char *ptr;
    ptr=(char *)&a;
    printf("%d",*ptr);
    return 0;*/
   /* int a=0;
    while(a++);
    {
    printf("heloo");
    }*/
 // printf("%s",add());

//}*/
int main()
{
    static int i=5;
     printf("%d",i--);
    if(i){
        main();
       
    }
}

