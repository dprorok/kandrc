#include <stdio.h>

/* count blanks, tabs, and newlines in input */
int main(void)
{
      int c;
      int bl = 0;
      int t = 0;
      int nl = 0;

      while((c = getchar()) != EOF)
            switch(c) {
                  case ' ': bl++; break;
                  case '\t': t++; break;
                  case '\n': nl++; break;
            }

      printf("%d blanks, %d tabs, and %d newlines\n", bl, t, nl);
      
      return 0;
}
