// wirte a c prog to add elements from array in even position
#include<stdio.h>
int main(){
    int a[10],i=0,sum=0;
    printf("Enter upto 10 Values: ");
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    for(i=0; i<10; i++) 
    {
        if(i%2==0)
            sum=sum+a[i];
    }
    printf("Total Sum of even values is: %d ",sum);
    return 0;
}