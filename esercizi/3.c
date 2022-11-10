#include <stdio.h>
//program that takes two inputs
//and as output gives the MCD
//Using the itarative method
int main()
{
  int y,x;
  //assumes x>0 and y>0
  printf("insert first number Natural x: ");
  scanf("%d",&x); 
  printf("insert second number Natural y: ");
  scanf("%d",&y);

  while(x!=y)
    {
      if(x>y)
      {
        x=x-y;
      }
      if(y>x)
      {
        y=y-x;
      }
    }
  printf("The MCD is: %d\n",x);
}