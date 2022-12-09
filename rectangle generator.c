#include <stdio.h>

void rectangle(int n, int m);//function rectangle
int main(void) {
  int n, m;
  scanf("%d", &n);
  scanf("%d", &m);
  rectangle(n, m);//execute below commands
  return 0;
}
void rectangle(int n, int m)
{
  int i, j;
  for(i = 0; i < n; i++)//print width
  {
    printf("*");
  }
  printf("\n");
  for(i = 0; i < m - 2; i++)//print length
  {  
    printf("*");
    for(j = 0; j < n - 2; j++)//print length
    {  
      printf(" ");
    }
    printf("*\n");
  }
  for(i = 0; i < n; i++)//print width
  {  
    printf("*");
  }
  printf("\n");
}
                                                   //by codeyoon1324
