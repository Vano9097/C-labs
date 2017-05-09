#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
  double r, d, k;
  scanf("%lf%lf", &r, &d);
  k = d  / 360;
  
  printf("%lf\n",PI*r*r*k);
  printf("%lf\n",PI*2*r*k);  
  return 0;
}
