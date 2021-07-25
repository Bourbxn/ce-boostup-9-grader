#include<stdio.h>
int main(){
  double flt;
  int num;
  scanf("%lf %d",&flt,&num);
  if(num==1)printf("%.1lf",flt);
  else if(num==2)printf("%.2lf",flt);
  else if(num==3)printf("%.3lf",flt);
  else if(num==4)printf("%.4lf",flt);
  else if(num==5)printf("%.5lf",flt);
  else if(num==6)printf("%.6lf",flt);
}
