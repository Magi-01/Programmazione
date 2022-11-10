#include <stdio.h>

int check(double x,double y,double n)
{
  if (x>y)
  {
    if((x-y)<=n)
      printf("The two numbers %lf and %lf are equal (in between delta of: %lf\n)",x,y,n);
    else if((x-y)>n)
      printf("The two numbers %lf and %lf are not equal (bigger than delta of: %lf\n)",x,y,n);
  }
  else
  {
    if((y-x)<=n)
      printf("The two numbers %lf and %lf are equal (in between delta of: %lf\n)",x,y,n);
    else if((y-x)>n)
      printf("The two numbers %lf and %lf are not equal (bigger than delta of: %lf\n)",x,y,n);
  }
  
}

int main()
{
  double x,y,n;

  printf("insert first number x: ");
  scanf("%lf",&x); 
  printf("insert second number y: ");
  scanf("%lf",&y); 
  printf("insert delta n: ");
  scanf("%lf",&n); 

  check(x,y,n);
  return(0);
}