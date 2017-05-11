#include <stdlib.h>
#include <stdio.h>



int main(){

int N,i;
int j, k = 0, p=1;
printf("Enter n: ");
scanf("%d", &N);
int **A = (int **) malloc(N*sizeof(int *));
for(i = 0; i < N; i++) {
    A[i] = (int *) malloc(N*sizeof(int));
}

i=0;
while (i < N*N) 
 {
    k++;
    for (j=k-1;j<N-k+1;j++)
    {
        A[k-1][j]=p++;
        i++;
    }   
 
    for (j=k;j<N-k+1;j++)
    {
        A[j][N-k]=p++;
        i++;
    }   
 
    for (j=N-k-1;j>=k;j--)
    {
        A[N-k][j]=p++;
        i++;
    }    
 
    for (j=N-k;j>=k;j--)
    {
        A[j][k-1]=p++;
        i++;
       
    }   
   
 }

for(i=0;i<N;i++)
{
printf("\n");
 for(j=0;j<N;j++)
     printf("%3d ",A[i][j]);
}

for(int i = 0; i < N; i++) {
    free(A[i]);
}
free(A);

return 0;
}