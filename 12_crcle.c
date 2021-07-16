#include<stdio.h>
int main(){
  double r,areaofcr;
  scanf("%lf", &r);
  if(r<=0){
    printf("ERROR");
  }
  else{
    areaofcr = 22*(r/7)*r;
    printf("%.8lf", areaofcr);
    return 0;
  }

}
