#include <stdio.h>
#include <math.h>

double somm(int n,int k)
{
  double count=0;
  printf("sum from: %lf\n",count+1);
  for(int i=1;i<=n;i++)
    {
      count=count+((i*pow(k,i+1))/pow(3,i));
    }
  printf("sum: %lf\n",count);
  return count;
}

int main()
{
  int n,k;
  printf("insert n upper limit: ");
  scanf("%d",&n);
  printf("insert k parameter: ");
  scanf("%d",&k);

  double m = somm(n,k);
  return(0);
}
