#include<stdio.h>
int main(){
  double a,b,c;
  scanf("%lf %lf %lf", &a, &b, &c);
  if(a<=0 || b<=0 || c<=0){
    printf("%.4lf, %.4lf and %.4lf are NOT sides of triangle.",a,b,c);
    return 0;
  }
  if((a>=b && a>=c) && a>=b+c){
    printf("%.4lf, %.4lf and %.4lf are NOT sides of triangle.",a,b,c);
    return 0;
  }
  else if((b>=a && b>=c) && b>=a+c){
    printf("%.4lf, %.4lf and %.4lf are NOT sides of triangle.",a,b,c);
    return 0;
  }
  else if((c>b && c>a) && c>=a+b){
    printf("%.4lf, %.4lf and %.4lf are NOT sides of triangle.",a,b,c);
    return 0;
  }

  if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
    printf("%.4lf, %.4lf and %.4lf are sides of RIGHT triangle.",a,b,c);
  }
  else{
    printf("%.4lf, %.4lf and %.4lf are NOT sides of RIGHT triangle, just a TRIANGLE.",a,b,c);
  }
}
