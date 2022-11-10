#include <stdio.h>

int som_rec(int i)
{
  if(i==0)return (0);
  return (i+som_rec(i-1));
}

int som_ite(int a,int b)
{
  int x=0;
  for(int i=a;i<=b;i++)
    {
      x += som_rec(i);
    }
  return x;
}

int main()
{
  int a,b;

  printf("insert minimum a: ");
  scanf("%d",&a);
  printf("insert maximum b: ");
  scanf("%d",&b);
  
  
  printf("the sum is: %d\n",som_ite(a,b));
}