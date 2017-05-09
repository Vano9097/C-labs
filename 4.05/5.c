#include <stdio.h>
#include <math.h>

int main()
{
  double i;
  scanf("%lf", &i);
  if (i < 0)
    i = -i;
  
  printf("%lf\n",i);
  return 0;
}
