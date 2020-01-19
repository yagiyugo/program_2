#include<stdio.h>

int calc_dist(int x1, int x2, int y1, int y2) {
  int dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
  return dist;
}

int diameter_squared(int x[], int y[], int n) {
  int i, j, max = 0;
  
  for(i=0; i<n; i++) {
    for(j=i; j<n; j++) {
      if(calc_dist(x[i], x[j], y[i], y[j]) > max)
	max = calc_dist(x[i], x[j], y[i], y[j]);
    }
  }

  return max;
}

int main(void) {
  int sx[3] = {0, 4, 4};
  int sy[3] = {0, 0, 3};

  printf("%d\n",diameter_squared(sx, sy, 3));

  return 0;
}
