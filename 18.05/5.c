#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

char *code(char *str)
{
    int i,j;
    
    for (i=0; str[i]!=0;i++);
    
    char *ar;
    ar = (char *) malloc( (3*i+1)*sizeof( char) );
    for (j=0;j<i-1;j++)
    {
        ar[j*3]=str[j];
        ar[3*j+1] = 32 + rand() % (127 - 32 +1);
        ar[3*j+2] = 32 + rand() % (127 - 32 +1);
        
    }
    ar[3*j]=str[j];
    ar[3*j+1] = 0;
    return ar;
}

char *decode(char *str)
{
    int i,j;
    
    for (i=0; str[i]!=0;i++);
    srand(time(NULL));
    char *ar;
    ar = (char *) malloc( (i/3+1)*sizeof( char) );
    for (j=0;j<=i;j=j+3)
    {
        ar[ (j/3)]=str[j];
    }
    ar[ (j/3)+1] = 0;
    return ar;
}

    
int main()
{
  int len=10;
  char *st,*st1,str[200];
  srand(time(NULL));
  gets(str); //???
  st=code(str);
  printf("%s\n", st);
  st1=decode(st);
  printf("%s\n", st1);

  free(st);
  free(st1);
  
  return 0;
}