                #include<stdio.h>
                    int main ()
 {
               float n1, n2;
               int ch;
     
     printf ("Enter number 1 for performing task= ");
     scanf ("%f", &n1);
     printf ("Enter number 2 for performing task = ");
     scanf ("%f", &n2);
     printf("eselect from given choice: ");

     printf ("ADDITION = 1\nSUBTRACT = 2\nMULTIPLICATION = 3\nDIVISION = 4");
     printf ("\nEnter your choice =");
     scanf ("%d", &ch);

     switch(ch)
     {
         case 1: printf ("ADDITION is = %.1f", n1+n2); break; 
         case 2: printf ("SUBTRACTION is = %.1f", n1-n2); break;
         case 3: printf ("MULTIPLICATION is = %.1f", n1*n2); break;
         case 4: printf ("DIVISION is = %.2f", n1/n2); break;
          default: printf ("Invalid choice. ");     
     }
   return 0;
} 


