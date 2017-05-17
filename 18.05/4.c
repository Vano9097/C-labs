#include <stdlib.h>
#include <stdio.h>

#include <string.h>

void changeStringSize(char *str, int n )
{
    int i;
    for (i=0; str[i]!=0;i++);
    if (i>n)
        str[n] = 0;
    else
    {
        for (;i<n;i++) str[i]='*';
        str[n]=0;
    }
}

char str[200];
    
int main()
{
  int len=10;
  /*printf("Enter len: " );
  scanf("%d",&len);
  printf("Entert string: ");
  printf("\n");*/
  //getchar(str);
  gets(str);
  changeStringSize(str,len);
  printf("%s\n", str);
  
  return 0;
}