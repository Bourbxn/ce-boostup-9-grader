#include<stdio.h>
int main(){
  double x1,y1,x2,y2;
  scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
  printf("X=%.2lf\n", 0.5*(x1+x2));
  printf("Y=%.2lf\n", 0.5*(y1+y2));
}
