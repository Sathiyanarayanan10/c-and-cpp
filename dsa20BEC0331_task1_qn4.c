//w a c p to square the elements and print the sum
#include <stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 numbers \n");
    int i;
    double sum=0.0;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    for (i=0;i<10;i++){
        sum=sum+(arr[i]*arr[i]);
    }
    printf("%f",sum);
}