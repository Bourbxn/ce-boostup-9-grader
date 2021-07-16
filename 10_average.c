#include <stdio.h>
int main(){
  double x,y,z,xbar;
  scanf("%lf %lf %lf", &x, &y, &z);
  xbar = (x + y + z )/3;
  printf("%.2lf", xbar);
  return 0;
}
