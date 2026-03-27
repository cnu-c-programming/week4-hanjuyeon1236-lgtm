#include <stdio.h>

void my_print(char type, void* x) {

}
int main() {
  int a = 0x61;
  char b = 'b';
  char* c = "hello world";

  my_print('C', &a);
  my_print('D', &b);
  my_print('5', c);
  mu_print('C', c);

  return 0;
}
