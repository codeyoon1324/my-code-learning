#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  srand(time(NULL));
  printf("%d\n", rand() % 499 + 500);/*this is the range 500-999*/
  printf("%d\n", rand() % 499 + 500);
  printf("%d\n", rand() % 499 + 500);
  printf("%d\n", rand() % 499 + 500);
  /*how to do random in c(easy)
    1.#include <stdlib.h> add
    2.#include <time.h> add
    3.srand(time(NULL)) type
    4.printf("%d\n", rand()) type
    5.()a) write numbers in 'a'
    6. if you want to range the numbers type "(big number-small number)+small number"
                                                       noted on.2022/10/22
													                         by.codeyoon1324*/
  return 0;
}
