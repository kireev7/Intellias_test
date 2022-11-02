#include <stdio.h>

#define SET_BIT(x, p) x | (1 << (p-1))    // set (set to 1) proper bit into the "x" byte by "p" position
#define CLR_BIT(x, p) x & (~(1 << (p-1))) //clear (set to 0) proper bit into the "x" byte by "p" position
#define TGL_BIT(x, p) x ^ (1 << (p-1))    // flip/toggle proper bit into the "x" byte by "p" position
#define CHK_BIT(x, p) x & (1 << (p-1))  // check proper bit into the "x" byte by "p" position

void int2str(int bin) {
  char text[40];

  sprintf(text, "%d", bin);
  printf("%s\n", text);
}

int main(int argc, char const *argv[]) {
  int x = 5,
      p = 5;

  printf("%d | %d set: %d\n", x, p, SET_BIT(x, p));
  printf("%d ~ %d clear: %d\n", x, p, CLR_BIT(x, p));
  printf("%d ^ %d toggle: %d\n", x, p, TGL_BIT(x, p));
  printf("%d & %d check: %d\n", x, p, CHK_BIT(x, p));
  printf("\n");
  int2str(0b11001100);


  return 0;
}
