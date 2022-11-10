#include <stdio.h>
//#include <math.h>

double ric_pow(double k)
{
  k = k * k;
  return k;
}

double ric_suc(double n)
{
  int m;
  double k;
  if(n==0)return 1;
  m = ric_pow(n);
  k = 1/(4*m + 4*n + 1);
  return k + ric_suc(n-1);
}

int main()
{
  double a;
  printf("Inserisci numero: ");
  scanf("%lf",&a);
  
  double m = ric_suc(a);

  printf("suc: %lf\n", m);
  
  return 0;
}