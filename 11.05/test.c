#include <stdlib.h>
#include <stdio.h>

#define min(X,Y) (((X) < (Y)) ? (X) : (Y))
#define max(X,Y) (((X) > (Y)) ? (X) : (Y))

int main (void)
{
printf ("max of 10, 20 is %d\n", max (10, 20));
printf ("min of 10, 20 is %d\n", min (10, 20));
return 0;
}