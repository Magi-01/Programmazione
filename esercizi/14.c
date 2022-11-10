#include <stdio.h>
#include <math.h>

int Bin_To_Dec(long int n)
{
  int cont = 0,i = 0,k;

  while (n!=0)
  {
    k=n%10;
    n=n/10;
    cont = cont + (k*pow(2,i));
    i++;
  }
  return cont;
}

int main()
{
  long int n;
  printf("inserisci numero binario: ");
  scanf("%ld",&n);

  int dec = Bin_To_Dec(n);
  printf("Bin_To_Dec: %d\n",dec);
}