#include <stdio.h>
#include <math.h>

int check(int x)
{
  int y;
  if(x==1)
  {
    y=0;
  }
  else
  {
    for (int i=2;i<=9;i++)
    {
      if(((x%i)!=0))
        y=x;
      else if(((x%i)==0)&&(x!=1))
        {
          y=0;
          i=9;
        }
    }
  }
  
  return y;
}

int count()
{
  int a=100;
  for(int i=1;i<=100;i++)
    {
      if(i==1)
          {
            a--;
          }
      for(int j=2;j<=i;j++)
        {
          if(((i%j==0)&&(i!=j)))
          {
            a--;
            j=i;
            //printf("test_%d: %d\n",i,a);
          }
        }
    }
  return a;
}

int main()
{
  int x;

  printf("insert first number x: ");
  scanf("%d",&x); 

  int z = check(x);
  int b = count();
  
  if(z!=0)
    printf("%d is a prime number\n",x);
  else
    printf("%d is not a prime\n",x);
  printf("the prime numbers between 1-100 are: %d\n",b);
}