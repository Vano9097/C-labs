#include <stdlib.h>
#include <stdio.h>

int main()
{
  int i, n, m, len;
  double a,b,delta, *ar;
  printf ("Enter n, m: ");
  scanf("%d%d", &n, &m);
  
  printf ("Enter a, b: ");
  scanf("%lf%lf", &a, &b);
  len = abs(n-m);
  delta = (b-a)/len;  
  for (i=0;i<=len;i++,a = a + delta)
  {
      printf("%lf ", a);
  }  
  return 0;
}
