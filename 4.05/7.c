#include <stdio.h>
#include <math.h>

#define n 100000

int main()
{
  int i;
  
  while (i != n)
  {
  scanf("%d", &i);

  if (i < n)
  printf("<\n");
  else
    {if (i==n)
      printf("=\n");
      else
    printf(">\n"); 
    }
  }    
    
  return 0;
}
