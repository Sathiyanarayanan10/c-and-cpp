//20BEC0331
// write a c program to create 10 integers using dynamic memory location

#include <stdio.h>
#include <stdlib.h>

int main(){
    int* pt; 
    int i,n=10;
    printf("Total integers: %d\n",n);
    
    // Dynamic allocation of memory using malloc()
    pt=(int*)malloc(n * sizeof(int));

    if(pt == NULL){
        printf("Memory location not allotted \n");
        exit(0);
    }else{
        for(i=0;i<n;i++){
            pt[i]=rand();
        }

        printf("The elements in the array are: \n");
        for(i=0;i<n;i++){
            printf(" %d ",pt[i]);
        }
    }
    return 0;
}