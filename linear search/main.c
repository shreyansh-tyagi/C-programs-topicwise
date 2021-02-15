#include <stdio.h> 
void findElement(int[], int, int);  
int main() { 
    int arr[] = { 10, 20, 30, 40, 50, 60 };  
      
    // no of elements 
    int n = 6;   
      
    // key to be searched  
    int key = 40;  
  
    // Calling function to find the key  
    findElement(arr, n, key);  
} 
void findElement(int arr[], int size, int key)  
{  
    // loop to traverse array and search for key  
    for (int i = 0; i < size; i++) {  
        if (arr[i] == key) {  
            printf("Element found at position: %d", (i + 1));  
            break; 
        }  
    }  
}  
  