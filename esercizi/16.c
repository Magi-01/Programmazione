#include <stdio.h>

int Fibonacci(int n)
{
  int F_0=0;
  int F_1=0;
  int F_i;
  int F_i_1 = F_1;
  int F_i_1 = F_0;

  for(int i=2;i<=F_i;i++)
    {
      F_i = F_i_1 +F_i_2;
      F_i_2 = F_i_1;
      F_i_1 = F_i;
    }
  return F_i;
}

int main()
{
  int n;

  printf("insert first number n: ");
  scanf("%d",&n); 

  int fib = Fibonacci(n);

  printf("il Fibonacci è: %d",fib);

}


