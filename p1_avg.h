#include <stdio.h>

void main_avg(void) {
  int n;
  scanf("%d", &n);
  if(n == 3) {
    float x1, x2, x3;
    scanf("%f %f %f", &x1, &x2, &x3);
    printf("%f\n", (x1+x2+x3) / 3);
  } else {
    float x1, x2, x3, x4;
    scanf("%f %f %f %f", &x1, &x2, &x3, &x4);
    printf("%f\n", (x1+x2+x3+x4) / 4);
  }
}
