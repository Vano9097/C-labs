#include <stdlib.h>
#include <stdio.h>

int gcd(int x, int y)
{
    return y ? gcd(y,x%y) : x;
}



int main(){

int len1,i,j, *ar1;
  printf ("Enter len 1: ");
  scanf("%d", &len1);
  ar1 = (int *) malloc( len1*sizeof(int) );
  for  (i=0;i<len1;i++)
  {                  
    scanf("%d", &ar1[i]);
  }

  for (i=0;i< len1;i++)
  {
      for (j=i+1; j < len1; j++)
      {
          if (gcd(ar1[i],ar1[j]) == 1)
            printf("(%d, %d)", ar1[i],ar1[j]);
      }
  }
return 0;
}