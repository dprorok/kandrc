#include <stdio.h>

#define IN 1      /* inside a sequence of blanks */
#define OUT 0     /* outside a sequence of blanks */

/* copies input to output, replacing each string of one or more blanks
      by a single blank */
int main(void)
{
      int c, state;

      state = OUT;
      while((c = getchar()) != EOF) {
            if(c == ' ') {
                  if(state == OUT) {
                        putchar(c);
                        state = IN;
                  }
            }
            else {
                  putchar(c);
                  state = OUT;
            }
      }

      return 0;
}
