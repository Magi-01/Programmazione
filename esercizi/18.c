#include <stdio.h>
#include <math.h>

int check_it(int x)
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

int check_ric(int n)
{
  if (n==1)
    return n;
  if ((n!=2)||(n!=3)||(n!=5)||(n!=7))
  {
    if (n%2!=0)
       return n;
    else if (n%3!=0)
      return n;
    else if (n%5!=0)
      return n;
    else if (n%7!=0)
      return n;
  }
  else
   return 0;
}

int main()
{
  int n;
  printf("inserisci n: ");
  scanf("%d",&n);

  int x = check_ric(n);
  if(x==n)
  printf("%d è un numero primo",n);
  else if(x==0)
  printf("non è primo");
}
