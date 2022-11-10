#include <stdio.h>

int prod_rec(int i)
{
  if(i==1)return (2);
  else
    return (2*prod_rec(i--));
}

double prod_ite(int a,int b)
{
  float x=1;
  for(int i=a;i<=(b/2);i++)
    {
      x *= (prod_rec(i)/a);
    }
  x = x-b;
  return (x);
}

int main()
{
  int a,b;

  printf("insert minimum a: ");
  scanf("%d",&a);
  printf("insert maximum b: ");
  scanf("%d",&b);

  if(a==0)
    printf("error");
  else
    printf("the product is: %lf\n",prod_ite(a,b));
}