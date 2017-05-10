#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){

  int n,len, *ar1,i;
  printf ("Enter n: ");
  scanf("%d", &n);
  len = log10((double)n) + 1;
  ar1 = (int *) malloc( len*sizeof(int) );
  for (i=0; i< len; i++)
  {
    ar1[i]= (n / (int)pow(10, len-i-1)) % 10;
  }
  i=0;
  printf("%d*10^%d", ar1[i],len-i-1);
  for (i=1; i< len-2; i++)
  if (ar1[i] != 0)
    printf(" + %d*10^%d", ar1[i],len-i-1);

  if (ar1[i] != 0)
    printf(" + %d*10", ar1[i]);

  if (ar1[i+1] != 0)
    printf(" + %d", ar1[i+1]);

printf("\n");


return 0;
}