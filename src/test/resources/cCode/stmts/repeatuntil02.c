#include <stdio.h>
#include <stdbool.h>

void main() {
  int x, y;

  x = 0;
  y = 0;
  do {
    x = x + 1;
    do {
      y = y + 1;
    } while (!(y >= 10));
  } while (!(x >= 10));
  printf("%d\n", x);
  printf("%d\n", y);
}