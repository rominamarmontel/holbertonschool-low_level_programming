#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  if(n>5)
    printf("Last digit of %n and %(n%10) is greater than 5");
  else if(n==0)
    printf("Last digit of %n and %(n%10) is 0");
  else if(n<5)
    printf("Last digit of %n and %(n%10) is less than 6 and not 0");
  /* your code goes there */
  return (0);
}
