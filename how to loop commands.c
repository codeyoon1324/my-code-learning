#include <stdio.h>
int main(void) {
  int i;
  for(i=1; i<=10; i++)/*usually 2 semiclones(3 parts.)*/
    /*1.first one is command that do only once.(ex.i=1)
      2.second is the command that gives conditions(ex.i<=10)
      It will choose true or false by the conditions.
      3.Third one is 'after command' which is executed
	  after the below command had been done. (ex.i++)
                                                   2022/10/29*/
  {
    printf("ccube\n");
  }
  return 0;
}
