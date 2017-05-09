#include <stdlib.h>
#include <stdio.h>

int main()
{
  int i, n, *ar;
  printf ("Enter n: ");
  scanf("%d", &n);
  ar = (int *) malloc( n*sizeof(int) );
   
  i = 2;  
  ar[0] = 0;
  ar[1] = 1;
  for  (i=2;i<=n;i++)
  {                  
    ar[i] = ar[i-1]+ar[i-2];
  }
  
  
 for (i=0; i<=n;i++)
  printf("%d ", ar[i]);
     
  free(ar); 
  return 0;
}
