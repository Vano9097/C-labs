#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int *GenArray (int n, int a, int b)
{
    int *ar, i;
    ar=NULL;
    ar = (int *) malloc( n*sizeof(int) );
    if (ar != NULL)
    {

      for (i=0;i<n;i++)
        ar[i] = a + rand() % (b - a+1);
    }
    return ar;
}


int main()
{
  int i,a,b,len,*arr;
      srand(time(NULL));  
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