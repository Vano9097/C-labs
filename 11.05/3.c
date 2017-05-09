#include <stdlib.h>
#include <stdio.h>

#define min(X,Y) (((X) < (Y)) ? (X) : (Y))
#define max(X,Y) (((X) > (Y)) ? (X) : (Y))

int main()
{
  int i,k,l, len1,len2,x, *ar1, *ar2,*ar3;
  printf ("Enter len 1: ");
  scanf("%d", &len1);
  ar1 = (int *) malloc( len1*sizeof(int) );
  for  (i=0;i<len1;i++)
  {                  
    scanf("%d", &ar1[i]);
  }
  

  printf ("Enter len 2: ");
  scanf("%d", &len2);
  ar2 = (int *) malloc( len2*sizeof(int) );
  for  (i=0;i<len2;i++)
  {                  
    scanf("%d", &ar2[i]);
  }
  
 ar3 = (int *) malloc( (len2+len1)*sizeof(int) );
 
 for (i=0,k=0,l=0; k < len1 & l <len2  ;i++)
 {
     
     if (ar1[k]<ar2[l])
     {
         ar3[i]=ar1[k];
         k++;
     }
     else
     {
         ar3[i]=ar2[l];
         l++;
     }
 }

 for (;k<len1;k++,i++)
 {
    ar3[i]=ar1[k];
 }

for (;l<len2;l++,i++)
 {
    ar3[i]=ar2[l];
 }


 for (i=0; i<(len1+len2);i++)
  printf("%d ", ar3[i]);
     
  free(ar1); 
  free(ar2); 
  return 0;
}
