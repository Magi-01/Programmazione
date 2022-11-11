#include <stdio.h>
//#include <math.h>

void somma_armonnia(int n, double *h)
{
  if (n==1) *h = 1.0;
  somma_armonnia( n-1, h);
  *h = (1.0/n) + *h;
}

int main()
{
  double h;
  int n = 5;

  somma_armonnia(n, &h);

  printf ("%lf\n",h);
  
  return 0;
}