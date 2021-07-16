#include<stdio.h>
#include<math.h>
int main(){
  double x,y,r,rslt;
  int n;
  scanf("%lf %lf %d", &x, &y, &n);
  if (n>0 && x!=0) {
    r = y/x;
    rslt = x * pow(r,n-1);
    printf("%.6lf", rslt);
  }
  else{
    printf("ERROR");
  }
}
