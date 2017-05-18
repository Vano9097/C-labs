#include <stdlib.h>
#include <stdio.h>

#include <string.h>

char *changeStringSize(char *str, int n )
{
    int i;
    char *ar;
    ar = (char *) malloc( (n+1)*sizeof( char) );
    for (i=0; str[i]!=0 && i<n ;i++)
        ar[i]=str[i];
    for (;i<n;i++) 
        ar[i]='*';
    ar[n]=0;
    return ar;
}

char str[200];
    
int main()
{
  int len;
  char *ar;
  gets(str);
  printf("Enter len: ");
  scanf("%d", &len);
  ar = changeStringSize(str,len);
  printf("%s\n", ar);
  
  free(ar);

  return 0;
}