//20BEC0331 Q5 Insertion Sort
#include <stdio.h> 
#include <math.h>
void insertionSort(int arr[], int size) { 
 for (int st=1;st<size;st++) { 
 int key=arr[st]; 
 int j=st-1; 
 while(key<arr[j] && j>=0) { 
 arr[j+1] = arr[j]; 
   --j; 
 } 
 arr[j+1] = key; 
 } 
} 

void printArray(int arr[],int size) { 
 for (int i=0;i<size;i++) { 
 printf(" %d ",arr[i]); 
 } 
 printf("\n"); 
} 

int main() { 
 int data[] = {10,8,12,6,7,9,4,3,15,13,2,1,11,5,14}; 
 int size = sizeof(data) / sizeof(data[0]); 
 printf("Original array :\n");
 printArray(data, size);
 insertionSort(data, size); 
 printf("Sorted array in ascending order:\n"); 
 printArray(data, size); 
} 
