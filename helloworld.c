#include<stdio.h>
#include<omp.h>

int main()
{
	int n = 100;
  int i;
  int prime;
  int total = 0;
  
#pragma omp parallel for reduction(+:total)
  for( i = 2; i <= n; i++ )
  {
    prime = 1;
	int j = 2;
    for( j; j < i; j++ )
    {
      if( i % j == 0 )
      {
        prime = 0;
        break;
      }
    }
    total += prime; 
	}

  printf("%d is the answer\n",total);
  return 0;
}