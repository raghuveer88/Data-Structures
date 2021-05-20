#include<stdio.h>

void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
       
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key;
        
        for(j=0;j<n;j++){
            printf(" %d",arr[j]);
            
        }
        printf("\n");
    } 
     
} 

void printArray(int arr[], int n) { 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
    



int main(){
int a[] = {3,4,2,1,5};
int n = sizeof(a)/sizeof(a[0]);

insertionSort(a,n);
printArray(a,n);
    return 0;
}