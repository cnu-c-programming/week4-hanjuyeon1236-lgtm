#include <stdio.h>
#include

int main() {
  char chars[] = { 'A', 'z', '5', '!', ' '};
  int n = sizeof(chars) / sizeof(chars[0]);

  for(int i = 0; i<n; i++) {
    char ch = chars[i];
    printf("%c - alpha:%d digit:%d uppeer:%c lower:%c\n",
        ch,
                (ch),
                (ch),
                (ch),
                (ch));
  }

  return 0;
}
