#include <stdio.h>

int min(int a, int b) {
  if (a>b)
    return b;
  else
    return a;
}

int main(void) {
  int x1, x2, x3, x4, x5;
 
  printf("input five numbers: ");
  scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5);
  printf("The smallest is %d.\n", min(x1, min(x2, min(x3, min(x4, x5)))));
  return (0);
}
