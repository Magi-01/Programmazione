#include <stdio.h>
//program that takes input as int
//and gives as output of int * int
//for every int-1
int main()
{
  int n,N;
  
  printf("insert number: ");
  scanf("%d",&n);
  for(int i=n;i>0;i--)
    {
      N=i*i;
      printf("\nyour number is: \n%d\n",N);
    }
}