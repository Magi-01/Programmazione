#include <stdio.h>
#include <math.h>

double somm(int n)
{
  double k=1;
  printf("somma da: %lf\n",k);
  for(int i=1;i<=n;i++)
    {
      k=k+(1/pow(((2*i)+1),2));
    }
  printf("sommatoria: %lf\n",k);
  return k;
}

int main()
{
  int n;
      printf("inserisci n: ");
      scanf("%d",&n);

      double m = somm(n);
  return(0);
}
