#include <stdio.h> 
  
int main() { 
    int i = 10; 
  
    if (i == 10) 
    { 
        // First if statement 
        if (i < 15) 
           printf("i is smaller than 15\n"); 
  
        // Nested - if statement 
        // Will only be executed if statement above 
        // is true 
        if (i > 12) 
            printf("i is smaller than 12 too\n"); 
        else
            printf("i is greater than 15"); 
    } 
    else
    {
        printf("we are in else");
    }
    
  
    return 0; 
} 