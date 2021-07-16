#include<stdio.h>
int main(){
  double x,y,result,d;
  int n;
  scanf("%lf %lf %d",&x, &y, &n);
  d=y-x;
  result = x + ((n-1)*d);
  printf("%.6lf", result);
}
