#include<stdio.h>
int main(){
  double x1, y1, x2, y2, y, x, m, c;
  scanf("%lf %lf,%lf %lf", &x1, &y1, &x2, &y2);
  m = (y2-y1)/(x2-x1);
  c=(m*-x1)+y1;
  printf("y=%.2lfx+%.2lf",m,c);
  return 0;
}
