#include<stdio.h>

int count(int x, int a[], int n) {
  int i, count = 0;

  for(i=0; i<n; i++) {
    if(a[i] == x)
      count++;
  }

  return count;
}

int main(void) {
  int a[8] = {2, 16, -4, 7, 8, 16, 3, 16};

  printf("%d\n",count(16, a, 8));

  return 0;
}
