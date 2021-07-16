#include<stdio.h>
int main(){
  double r,vol;
  scanf("%lf", &r);
  vol = (4*r*r*r*3.1415926535897932384626433)/3;
  printf("%.8lf", vol);
}
