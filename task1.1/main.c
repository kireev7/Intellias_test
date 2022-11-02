#include <stdio.h>

#define MIN(x, y) x<y ? x : y  //Macros min
#define MAX(x, y) x>y ? x : y  //Macros max

int main(int argc, char const *argv[]) {
  // Var's
  int x1 = 190, x2 = 787;
  int y1 = 126, y2 = 918;

  printf("Maximum:\n");
  printf("MAX(%d, %d) = %d;\n", x1, y1, MAX(x1, y1));
  printf("MAX(%d, %d) = %d;\n", x2, y2, MAX(x2, y2));

  printf("Minimum:\n");
  printf("MIN(%d, %d) = %d;\n", x1, y1, MIN(x1, y1));
  printf("MIN(%d, %d) = %d;\n", x2, y2, MIN(x2, y2));

  return 0;
}
