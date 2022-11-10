#include <stdio.h>

int main()
{
  int x,y,n=0;
//assume x>0, y>0
  printf("insert first number Natural x: ");
  scanf("%d",&x); 
  printf("insert second number Natural y: ");
  
  while (x>=1)
    {
      if ((x%2)!=0)
      {
        n=n+y;
      }
      x=x/2;
      y=y*2;
    }
  printf("Il prodotto fra i due é: %d\n",n);
}