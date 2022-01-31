//20BEC0331
// write a c program to resize to 5 integers to qn 1
#include <stdio.h>
#include <stdlib.h>

int main(){

    int* pt;
    int n,i;

    //so n is 10 in prev qn
    n=10;
    pt=(int*)malloc(n * sizeof(int));

    if (pt == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }else{
        for(i=0;i<n;i++){
            pt[i]=rand();
           }
         
         printf("The 10 elements are : \n");
         for(i=0;i<n;i++){
             printf(" %d ",pt[i]);
         }

         //new n after resize 5
         n=5;
         //dynamically relocting memory using relloc()
         pt=realloc(pt,n * sizeof(int) );
         //removing last 5 int
          printf("\nThe elements of the array are: \n");
            for (i = 0; i < n; ++i) {
            printf(" %d ", pt[i]);
          }
     }
     return 0;
}