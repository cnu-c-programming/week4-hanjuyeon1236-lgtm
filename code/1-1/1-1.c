#include <stdio.h>

extern int foo(int a, int b);

int main() {
  printf("%d\n", foo(a, 2));
  return 0;
}
