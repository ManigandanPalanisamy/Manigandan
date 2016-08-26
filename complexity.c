#include <stdio.h>
#include <stdlib.h>
void check(int arr[], int n, int *x, int *y)
{
  int xor = arr[0]; 
  int s;  
  int i;
  *x = 0;
  *y = 0;
  for(i = 1; i < n; i++)
   xor ^= arr[i];
  s = xor & ~(xor-1);
 for(i = 0; i < n; i++)
  {
    if(arr[i] & s)
     *x = *x ^ arr[i]; 
    else
     *y = *y ^ arr[i]; 
  }
}
int main()
{
  int arr[] = {2, 3, 5, 9, 11, 2, 3, 11};
  int *x = (int *)malloc(sizeof(int));
  int *y = (int *)malloc(sizeof(int));
  check(arr, 8, x, y);
  printf("Non-repeating elements: %d and %d", *x, *y);
  getchar();
}