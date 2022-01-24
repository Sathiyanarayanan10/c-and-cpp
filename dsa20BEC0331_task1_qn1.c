// wirte a c prog to add elements from array in odd position
#include<stdio.h>
int main(){
    int a[10],i,sum=0;
    printf("Enter upto 10 Values: ");
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    for(i=0; i<10; i++) 
    {
        if(i%2==1)
            sum=sum+a[i];
    }
    printf("Total Sum of Odd values is: %d ",sum);
    return 0;
}