#include <stdio.h>

int main(void) {
  float cm = 8000.0;//80m -> 8000cm
  float total = 0.0;//variable that record the total distance.
  int i;//variable that print how much time the ball moved
  printf("Start from %.4fm\n", cm/100);
  for(i = 1; cm > 50; i++)
    {
      total += cm;//total distance that the ball fallen
      cm/=2.0;//command that calculate the distance that the ball jumped 
      printf("%dtime the ball jumped %.4fm\n", i, cm / 100);
      total +=cm;//total distance that the ball jumped
    }
  printf("\ntotal distance that the ball moved : %.4fm", total/100);
  return 0;
}
