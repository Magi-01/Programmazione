#include <stdio.h>

double a_n(int n,double p)
{
  double succ=p;
  printf("succ: %lf\n",succ);
  for(int i=2;i<n;i++)
    {
      succ=(succ+(p/succ))/2;
      printf("succ: %lf\n",succ);
    }
  return succ;
}

int main()
{
  int n;
  double p;
      printf("inserisci n: ");
      scanf("%d",&n);
      printf("inserisci p: ");
      scanf("%lf",&p);

      a_n(n,p);
  return(0);
}
