#include <stdlib.h>
#include <stdio.h>
#include <time.h>

unsigned char *GenArray (int n, int a, int b)
{
    unsigned char *ar;
    int i;
    ar = (unsigned char *) malloc( n*sizeof(unsigned char) );
    srand(time(NULL));
    for (i=0;i<n;i++)
    ar[i] = a + rand() % (b - a + 1);
    return ar;
}

void SortArray (int n, unsigned char *ar)
{
 
    int i, num[4];
    num[1] = 0;
    num[2] = 0;
    num[3] = 0; 
    for (i=0;i<n;i++)
    {
        num[ar[i]]++;
    }
    //printf("%d %d %d\n",num[1],num[2],num[3]);
    
    for (i=0;i<num[1]; i++) ar[i]=1;
    for (i=0;i<num[2]; i++) ar[num[1]+i]=2;
    for (i=0;i<num[3]; i++) ar[num[1]+num[2]+i]=3;
    return;

}


int main()
{
  int i,a,b,len;
  unsigned char *arr;
  
  printf ("Enter len: ");
  scanf("%d", &len);
 
  arr = GenArray(len, 1, 3);

  for (i=0; i<len;i++)
  printf("%d ", arr[i]);
  printf("\n");

  SortArray(len, arr);
  for (i=0; i<len;i++)
  printf("%d ", arr[i]);
  printf("\n");

  free(arr);
  
  return 0;
}