// w a c p to print the arr in rev order
#include <stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 numbers \n");
    int i,l;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    l=(int)sizeof(arr)/sizeof(arr[0]);//to find length of array

    for (i=l-1;i>=0;i--){
        printf("%d",arr[i]);
        printf(" ");
    }
    
}