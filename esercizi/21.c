#include <stdio.h>

float som_rec(int n)
{
  float x=n;
  if(x==0)return (1);
  
  x += 1.0/((2*som_rec(n--)+1)*(2*som_rec(n--)+1));

  return (x);
  
}

/*int som_ite(int a,int b)
{
  int x=0;
  for(int i=a;i<=b;i++)
    {
      x += som_rec(i);
    }
  return x;
}*/

int main()
{
  int a;

  printf("insert minimum a: ");
  scanf("%d",&a);
  /*printf("insert maximum b: ");
  scanf("%d",&b);*/
  
  
  printf("the sum is: %f\n",som_rec(a));
}