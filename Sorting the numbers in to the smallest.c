#include <stdio.h>

int main(void)
{
  int n, total =0;
  scanf("%d", &n);
  while(1)  //'n != 0'-> the command that must be used if you don't use 'if'
    {
      printf("%d" , n % 10);// command that sort the numbers which is the smallest
      total +=(n % 10);//total = total + (n % 10)
      n/=10;// n = n / 10
      if (n==0)
      {
        break;
      }
    }
  printf("\nTotal:%d", total);
  }
                                              //by.codeyoon1324
