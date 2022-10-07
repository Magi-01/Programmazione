#include <stdio.h>

int main() 
{
  char  fa;

  for(int i=33;i<128;i++)
    {
      printf("%d=%c; ",i,i);
      if(((i-3)%5)==0)
        {printf("\n\n");} 
   }

  printf("\n\n");
  
  for(int i=0;i<10;i++)
    {
      
      printf("\nInsert letter: ");
      scanf("%c", &fa);
      
      if (fa == 'Y')
      {
        printf("\nwin because: %c\n",fa);
        break;
      }
      else
        printf("\nloose because: %c\n",fa);
        continue;
    }
  
  return 0;
}