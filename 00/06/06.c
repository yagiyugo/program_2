#include<stdio.h>

int count(int x, int a[], int n) {
  int i, count = 0;

  for(i=0; i<n; i++) {
    if(a[i] == x)
      count++;
  }

  return count;
}

int most_frequent(int a[], int n) {
  int i, max = 0, max_num = a[0];

  for(i=0; i<n; i++){
    if(count(a[i], a, n) > max) {
      max = count(a[i], a, n);
      max_num = a[i];
    }
  }
  
  return max_num;

}

int main(void) {
  int a[8] = {2, 16, -4, 7, 8, 16, 3, 16};
  int b[7] = {-4, 3, -4, 2, 9, 6, 3};
  int c[10] = {6, 7, 7, 7, -3, -1, 0, 3, 1, 5};

  printf("%d\n",most_frequent(a, 8));
  printf("%d\n",most_frequent(b, 7));
  printf("%d\n",most_frequent(c, 10));

  return 0;

}
