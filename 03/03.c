#include<stdio.h>

int sum(int a[], int n) {
  int i, sum = 0;
  
  for(i=0; i<n; i++) {
    sum += a[i];
  }
  
  return sum;
}

int main(void) {
  int a[8] = {13, 6, 0, 21, -14, 18, 11, -4};

  printf("%d\n", sum(a,8));
  
  return 0;
}
