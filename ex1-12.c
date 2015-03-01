#include <stdio.h>

#define IN 1      /* inside a word */
#define OUT 0     /* outside a word */

/* prints input one word per line */
int main(void)
{
      int c, state;

      state = OUT;
      while((c = getchar()) != EOF) {
            if (c == ' ' || c == '\n' || c == '\t') {
                  if (state == IN) {
                        putchar('\n');
                        state = OUT;
                  }
            }
            else {
                  putchar(c);
                  if (state == OUT)
                        state = IN;
            }

      }

      return 0;
}
