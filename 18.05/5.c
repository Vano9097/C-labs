#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

void *code(char *str)
{
    int i,j;
    
    for (i=0; str[i]!=0;i++);
    srand(time(NULL));
    char *ar;
    ar = (char *) malloc( 3*i*sizeof( char) );
    for (j=0;j<=i;j++)
    {
        ar[j*3]=str[j];
        ar[3*j+1] = 32 + rand() % (127 - 32 +1);
        ar[3*j+2] = 32 + rand() % (127 - 32 +1);
    }
    ar[3*j+3] = 0;
    return ar;
}

void *decode(char *str)
{
    int i,j;
    
    for (i=0; str[i]!=0;i++);
    srand(time(NULL));
    char *ar;
    ar = (char *) malloc( (i/3)*sizeof( char) );
    for (j=0;j<=i;j=j+3)
    {
        ar[ (j/3)]=str[j];
    }
    ar[ (j/3)+1] = 0;
    return ar;
}


char str[200];
    
int main()
{
  int len=10;
  char *st;
  gets(str);
  st=code(str);
  printf("%s\n", st);
  st=decode(st);
  printf("%s\n", st);

  free(st);
  
  return 0;
}