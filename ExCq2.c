//20BEC0331 Q2. To remove duplicate elements in an array 
#include <stdio.h>
int remove_duplicate(int arr[], int n){
  if (n == 0 || n == 1)
    { 
       return n;
    }
  int temp[n];
  int j = 0;
  int i;
  for (i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1]){
           temp[j++] = arr[i];
        }
    }
  temp[j++] = arr[n - 1];
  for (i = 0; i < j; i++){
    arr[i] = temp[i];
    }
  return j;
}

int main()
{
  int n;
  printf("Enter no. of elements :-\n");
  scanf("%d", &n);
  int arr[n];
  int i;
  printf("Enter elements :-\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("\nArray Before Removing Duplicates: ");
  for (i = 0; i < n; i++){
    printf("%d ", arr[i]);
    }
  n = remove_duplicate(arr, n);
  printf("\nArray After Removing Duplicates: ");
  for (i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}