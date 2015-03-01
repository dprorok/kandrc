#include <stdio.h>

/* verify getchar() != EOF is 0 or 1 */
int main(void)
{
      int c, stop;

      do {
            printf("Please enter a character: ");
            stop = ((c = getchar()) != EOF);
            printf("\nYou entered: %c and getchar() != EOF is %d\n", c, stop);
      }
      while (stop);

      return 0;
}
