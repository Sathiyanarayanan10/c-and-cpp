//prog to reverse a number
#include <stdio.h>

int main(){

int i,k;
printf("\tEnter a number\n");
scanf("%d",&i);
k=reverse(i);
printf("\n\tReverse no. is %d",k);
return 0;
}

int reverse(int n){
    int temp=n;
    int rev=0,rem;
    while(temp!=0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    return rev;
}