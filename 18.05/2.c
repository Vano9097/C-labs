#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void *GenArray (int n, int a, int b)
{
    int *ar, i;
    ar = (int *) malloc( n*sizeof(int) );
    srand(time(NULL));
    for (i=0;i<n;i++)
    ar[i] = a + rand() % (b - a);
    return ar;
}


int main()
{
  int i,a,b,len,*arr;
  
  printf ("Enter len: ");
  scanf("%d", &len);
  printf("Enter a,b:");
  scanf("%d%d",&a,&b);
 
  arr = GenArray(len, a, b);
  for (i=0; i<len;i++)
  printf("%d ", arr[i]);
  printf("\n");

  free(arr); 
  return 0;

 
}