#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void minmax (int len, int *ar, int *min, int *max)
{
  int i;
  
  for (i = 0; i < len; i++)
  {
    if (*min > ar[i]) *min = ar[i];
    if (*max < ar[i]) *max = ar[i];
  }
}


int main()
{
  int min=INT_MAX, max=INT_MIN, i,len, *arr;
  
  printf ("Enter len: ");
  scanf("%d", &len);
  arr = (int *) malloc( len*sizeof(int) );
  for  (i=0;i<len;i++)
 {                  
    scanf("%d", &arr[i]);
  }
  minmax (len, arr, &min, &max);
  printf ("min = %d, max = %d\n", min, max);
  return 0;
}