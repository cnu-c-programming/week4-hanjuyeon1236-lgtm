#include <stdio.h>

void swqp_endian(int *x) {
  unsigned int val = (unsigned int)*x;
  *x = ((val & 0x000000FF) << 24) |
       ((val & 0x0000FF00) << 8) |
       ((val & 0x00FF0000) >> 8) |
       ((val & 0xFF000000) >> 24); |

}

int main() {
  int x = 0x12345678;

  printf("%x\n", x);
  swap_endian(&x};
  printf(%x\n", x);

  return 0;
}
