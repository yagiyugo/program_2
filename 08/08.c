#include<stdio.h>

int calc_dist(int x1, int x2, int y1, int y2) {
  int dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
  return dist;
}

int radius_squared(int x[], int y[], int n) {
  int i, j, max_dist, min_eccent;
  
  for(i=0; i<n; i++) {
    max_dist = calc_dist(x[i], x[0], y[i], y[0]);
    for(j=1; j<n; j++) {
      if(calc_dist(x[i], x[j], y[i], y[j]) > max_dist)
	max_dist = calc_dist(x[i], x[j], y[i], y[j]);
    }
    if(i==0 || max_dist < min_eccent) 
      min_eccent = max_dist;
  }

  return min_eccent;
}

int main(void) {
  int sx[3] = {0, 4, 4};
  int sy[3] = {0, 0, 3};

  printf("%d\n", radius_squared(sx, sy, 3));

  return 0;
}
