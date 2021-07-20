#include<stdio.h>
#include <math.h>
int main(){
  double a,b,c,ans1,ans2;
  scanf("%lf %lf %lf", &a, &b, &c);
  ans1 = (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);
  ans2 = (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a);
  if((b*b)-(4*a*c)<0 || a==0 || b==0 || c==0){
      printf("Error");
  }
  else if((b*b)-(4*a*c)==0){
      printf("x = %.2lf", -b/2);
  }

  else{
    printf("x1 = %.2lf, x2 = %.2lf", ans1,ans2);
  }
}
