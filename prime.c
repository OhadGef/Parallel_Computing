#include<stdio.h>
#include<omp.h>

int main()
{
	int n = 1000;
	int total = 0;  
	int prime = 0;
#pragma omp parallel for reduction(+: total), private(prime)
  for( int i = 2; i <= n; i++ )
  {    
    prime=1;	
    for(int j = 2; j < i; j++ )
    {
      if( i % j == 0 )
      {
        prime = 0;
        break;
      }
    }
    total += prime; 
	}
  printf("%d\n",total);
  return 0;
}
