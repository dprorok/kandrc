#include <stdio.h>
#include <stdlib.h>

#define IN        1      /* inside a word */
#define OUT       0     /* outside a word */
#define MAXSIZE   20

/* prints a histogram of the lengths of words in its input */

int main(void)
{
      int lengths[MAXSIZE] = {0};
      int wl = 0;
      int i, j, c, state;

      state = OUT;

      while((c = getchar()) != EOF) {
            if (c == ' ' || c == '\n' || c == '\t') {
                  if (state == IN) {
                        if(wl < MAXSIZE) {
                              ++lengths[wl-1];
                              state = OUT;
                              wl = 0;
                        }
                        else {
                              fprintf(stderr, "Error: %d is greater than max word length %d\n", wl, MAXSIZE);
                              exit(1);
                        }
                  }
            }
            else {
                  state = IN;
                  ++wl;
            }

      }

      printf("Word Lengths:\n");
      for(i=0; i<MAXSIZE; ++i) {
            printf("%2d: ", i+1);
            for(j=0; j<lengths[i]; ++j)
                  putchar('*');
            putchar('\n');
      }

      return 0;
}
