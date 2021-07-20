#include<stdio.h>
int main(){
  double h,l,p,area;
  scanf("%lf %lf %lf", &h, &l, &p);
  area=(0.5*(p+l))*h;
  if(h<=0 || l<=0 || p<=0 || p==l){
    printf("Error");
  }
  else{
    printf("%lf", area);
  }
}
