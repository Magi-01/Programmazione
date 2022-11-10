#include <stdio.h>

int main()
{
  int n,x;
  printf("insert the number of Natural numbers to check: ");
  scanf("%d",&n);

  int y=0,z=0;

  for(int i=0;i<n;i++)
    {
      printf("inert the %d first: ",i+1);
      scanf("%d",&x);
      if(x>y)
      {
        y=x;
      }
      else if(y>x)
      {
        z=x;
      }
    }
  printf("the minima is %d , the maxima is %d\n",z,y);
}