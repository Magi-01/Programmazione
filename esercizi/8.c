#include <math.h>
#include <stdio.h>

float distanza(double x_1,double y_1,double x_2,double y_2)
{
  double d;
  d=sqrt(((x_1-x_2)*(x_1-x_2))-((y_1-y_2)*(y_1-y_2)));
  return d;
}

int main()
{
  double x_1,y_2,x_2,y_1;
      printf("inserisci x_1: ");
      scanf("%lf",&x_1);
      printf("inserisci x_2: ");
      scanf("%lf",&x_2);
      printf("inserisci y_1: ");
      scanf("%lf",&y_1);
      printf("inserisci y_2: ");
      scanf("%lf",&y_2);

      double dis = distanza(x_1,y_2,x_2,y_1);

  printf("la distanza è: %lf\n",dis);
}