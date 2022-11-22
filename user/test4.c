#include "types.h"
#include "user.h"

int main() {
  // int *p;
  // p = (int *)0x5;
  // *p = 10;
  printf(1, "test\n");
  int value = 5;
  int *j;
  j = &value;
  printf(1, "j: %d\n", *j);
  *j = 15;
  printf(1, "j: %d\n", *j);
  *j = 20;
  printf(1, "j: %d\n", *j);

  return 0;
}