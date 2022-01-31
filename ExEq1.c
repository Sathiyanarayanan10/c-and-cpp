// 20BEC0331 Sathiya Q1. To print pattern
#include <stdio.h>
int main(){
    for (int i=1;i<=5;i++){
        for(int k=1;k<=i;k++){
            printf(" %d ",k);
        }
        printf("\n");
    }
}