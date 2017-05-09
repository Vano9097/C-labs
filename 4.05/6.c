#include <stdio.h>
#include <math.h>

int main()
{
  double a, res;
  int n,i;
  scanf("%lf", &a);
  scanf("%d", &n);

    if (n < 0)
    {
      n = -n;
      for (i=0, res = 1; i < n; i++, res = res * a );
      res = 1 / res; 
      }
    else

      for (i=0, res = 1; i < n; i++, res = res * a );
      
    
    printf("%lf\n",res);
  return 0;
}
