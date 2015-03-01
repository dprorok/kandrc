#include <stdio.h>

/* print the value of EOF */
int main(void)
{
      int c = EOF;
      int d = '\0';

      printf("The value of EOF is %d.\n", c);
      printf("The value of the null terminator is %d.\n", d);

      return 0;
}
