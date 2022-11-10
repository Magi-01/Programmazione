#include <stdio.h>

int minimo(int x,int y,int z)
{
  int min;
  if(x<=y)
    min = x;
  else
    min = y;
  if (z<=min)
    min = z;
  return min;
}

void test(int x,int y)
{
  int max;
  if(x>=y)
    max = x;
  else
    max = y;

  for (int i=1;i<max;i++)
    {
      int min = minimo(x,y,i);
      printf ("tripleta(%d,%d,%d) - minimo: %d\n", x,y,i,min);
    }
}

int main()
{
  int x,y,z;

  printf("insert first number x: ");
  scanf("%d",&x); 
  printf("insert second number y: ");
  scanf("%d",&y);

  test(x,y);
}


