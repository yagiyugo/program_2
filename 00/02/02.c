#include <stdio.h>

void rectangle(int w, int h) {
  int i, j;
  
  for(i=0; i<h; i++) {
    for(j=0; j<w; j++) {
      printf("*");
    }
    printf("\n");
  }
}

int main(void) {
  rectangle(20, 10);
  rectangle(15, 15);
  rectangle(10, 20);
  return (0);
}
