#include<stdio.h>
int main(){
  double x,y,rslt;
  scanf("%lf %lf", &x, &y);
  if(x<0 || y<0){
    printf("Error");
  }
  else{
    rslt=x*y;
    printf("Area = %.6lf x %.6lf = %.6lf", x, y, rslt);
  }
  return 0;
}
