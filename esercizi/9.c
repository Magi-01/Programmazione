#include <stdio.h>

double a_n(int n)
{
  double succ=0.5;
  printf("succ: %lf",succ);
  for(int i=2;i<n;i++)
    {
      succ=(succ+1)/2;
      printf("succ: %lf\n",succ);
    }
  return succ;
}

int main()
{
  int n;
      printf("inserisci n: ");
      scanf("%d",&n);

      a_n(n);
  return(0);
}
