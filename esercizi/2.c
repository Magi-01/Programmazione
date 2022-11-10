#include <stdio.h>
//program that takes input untill input=0
//as output gives sum of inputs divided by the number of times the question was asked
int main()
{
  int x,i=0;
  float n=0;
  //first does do then while
  do
  {
    printf("insert number x_%d: ",i);
    scanf("%d",&x);
    n=n+x;
      if (x==0)
      {
        printf("\nthe median is %f\n\n",n/i);
      }
    i++;
  }
    while(x!=0);
}