#include<stdio.h>
#include<math.h>
int main(){
  double x1, y1, x2, y2,xmxp,ymyp,sqrtall,d;
  scanf("%lf, %lf", &x1, &y1);
  scanf("%lf, %lf", &x2, &y2);
  xmxp = pow(x1-x2,2); ymyp = pow(y1-y2,2);
  sqrtall = sqrt(xmxp+ymyp);
  printf("%lf", sqrtall);
}
