#include<stdio.h>

int max(int a[], int n) {
  int i, max = a[0];

  for(i=0; i<n; i++) {
    if (max < a[i])
      max=a[i];
  }

    return max;
}

int main(void) {
  int a[8] = {13, 6, 0, 21, -14, 18, 11, -4};

  printf("%d\n", max(a,8));  
  
  return 0;
}
