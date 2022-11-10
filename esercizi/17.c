#include <stdio.h>

int Fibonacci(int n)
{
  if (n==0)
    return (0);
  else if (n==1)
    return (1);
  return (Fibonacci(n-1)+Fibonacci(n-2));
}

int main()
{
  int n;

  printf("insert first number n: ");
  scanf("%d",&n); 

  int fib = Fibonacci(n);

  printf("il Fibonacci è: %d\n",fib);

}


