#include <stdio.h>

int main()
{
      int x, y;
      for (x = 1; x <= 9; x += 2) { // x += 2 ===> x = x + 2
            for (y = 7; y >= 5; y--)
            printf("I=%d J=%d\n", x, y);
     }
    return 0;
}
