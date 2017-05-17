#include <stdlib.h>
#include <stdio.h>

#include <string.h>
// Библиотека для работы со строками

// Строки - z-строки - массивы char'ов с заключительным нулем
char person[100], full_name[200];
    
int main()
{
  printf("Who are you? ");
//  scanf("%s", person);
//  printf("Hello, %s!\n", person);
//  
//  _getch();
  
  printf("What is your full name? ");
  gets(full_name);
  printf("Glad to meet you, %s!\n", full_name);
  
  return 0;
}