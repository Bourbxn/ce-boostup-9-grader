#include<stdio.h>
int main(){
  double m,a,f;
  scanf("%lf %lf", &m, &a);
  f=m*a;
  if (m>=0) {
    printf("%.6lf = %.6lf x %.6lf", f, m, a);
  }
  else{
    printf("ERROR");
  }
}
